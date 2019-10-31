#include<stdlib.h>
#include<stdio.h>


int main()
{
    int n;
    
    char ans[26];
    char ch[24];
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf(" %c",&ch[i]);

    }
    
    
    
    int f=0;
    for(int r=0;r<n;r++)
    {
        if(ch[r]!='M'&&ch[r]!='B')
        {
            ans[f]=ch[r];f++;
        }
    }
    int new=(n-2)/2;
    printf("M: ");
    for(int f=0;f<new;f++)
    {
        printf("%c ",ans[f]);
    }
    printf("| B: ");
    for(int f=new;f<(n-2);f++)
    {
        printf("%c ",ans[f]);
    }
    printf("\n");
    printf("M: ");
    for(int f=new;f<(n-2);f++)
    {
        printf("%c ",ans[f]);
    }
    printf("| B: ");
    for(int f=0;f<new;f++)
    {
        printf("%c ",ans[f]);
    }
    printf("\n");
    
    
    for(int w=1;w<new;w++)
    {
        for(int s=new;s<(n-2);s++)
        {
            char t=ans[s];
            ans[s]=ans[w];
            ans[w]=t;
            
            printf("M: ");
            for(int p=0;p<new;p++)
            {
                printf("%c ",ans[p]);
            }
            printf("| B: ");
            for(int p=new;p<(n-2);p++)
            {
                printf("%c ",ans[p]);
            }
            printf("\n");
            printf("M: ");
            for(int p=new;p<(n-2);p++)
            {
                printf("%c ",ans[p]);
            }
            
            printf("| B: ");
            for(int p=0;p<new;p++)
            {
                printf("%c ",ans[p]);
            }
            
            printf("\n");

        }

    }
    return 0;
    


}