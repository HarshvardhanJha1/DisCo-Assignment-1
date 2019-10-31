#include<stdio.h>
#include<stdlib.h>

char a[1000];
int m;
char c[325];
char d[325];
void update()
{
   for(int i=0;i<m;i++)
   {
        for(int j=0;j<m;j++)
        {
                if((d[i]==c[j])&&(i!=j))
                {
                    d[i]=d[j];
                }
        }
   }
}

int main()
{
    fgets(a,1001,stdin);
    int n;
    for(n=0;n<1001;n++)
   {
       if(a[n]=='\n')
        break;
   }
   c[n]='\0';
   scanf("%d",&m);
   for(int i=0;i<m;i++)
   {
       scanf(" %c %c",&c[i],&d[i]);

   }
   update();
   for(int t=0;t<n;t++)
   {
       for(int z=0;z<m;z++)
       {
           if(a[t]==c[z])
           a[t]=d[z];
       }
   }
    printf("%s\n",a);
    return 0;
}