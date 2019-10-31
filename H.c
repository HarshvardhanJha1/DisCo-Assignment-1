#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void rotate(char s[],int n){
	char ch = s[n-1];
	for(int i=n-2;i>=0;i--){
		s[i+1]=s[i];
	}
	s[0]=ch;
}
int palindrome(char s[], int n)
{
	for(int i =0;i<n/2;i++)
	{
		if(s[i]!=s[n-i-1])
			return 0;
	}
	return 1;
}
void main()
{
	char s[1000];
	scanf("%[^\n]",s);
	char s2[1000];
	int count=0;
	int j=0;
	do
	{
		if(s[count]==' ')
		{
			s2[j]='\0';
			int length=strlen(s2);
			for(int i=0;i<length;i++)
			{
				if(palindrome(s2,length))
				{
					printf("%s ",s2);
					break;
				}
				rotate(s2,length);
			}
			j=0;
		}
		else if(s[count+1]=='\0')
		{
			s2[j]=s[count];
			s2[j+1]='\0';
			int length=strlen(s2);
			for(int i=0;i<length;i++)
			{
				if(palindrome(s2,length))
				{
					printf("%s ",s2);
					break;
				}
				rotate(s2,length);
			}
			j=0;
		}
		else
		{
			s2[j]=s[count];
			j++;
		}
		count++;
	
	}while(s[count]!='\0');
}