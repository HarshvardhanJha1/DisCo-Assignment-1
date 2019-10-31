#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char s[1000];
	scanf("%s",s);
	int m;
	scanf("%d",&m);
	char original[m];
	char replacement[m];
	for(int i=0;i<m;i++){
		scanf("%c %c\n",&original[i],&replacement[i]);
	}
	
	for(int j=0;j<m;j++){
		char og = original[j];
		char replace = replacement[j];
		for(int i=0;i<strlen(s);i++){
			if(s[i]==original[j]){
				s[i]=replacement[j];
			}
		}

	}

	printf("%s",s);
	return 0;
	
}