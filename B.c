#include<stdio.h>
#include<stdlib.h>
long long int r[10][10];
int flag[10][2];
int n;
int m;
int iscol(int flag[10][2])
{
    int c=0;
    for(int p=0;p<n;p++)
    if(flag[p][1]==1)
        c++;
    return c;

}
int main()
{
    scanf("%d ",&n);
    long long a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf(" %lld",&a[i]);
        flag[i][0]=a[i];
        flag[i][1]=1;
    }
    scanf(" %d",&m);
    long long preadv[m][2];
    for(int y=0;y<m;y++)
    {
        scanf(" %lld %lld",&preadv[y][0],&preadv[y][1]);
    }
    int preadvind[m][2];
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]==preadv[j][0])
            {
                preadvm[j][0]=i; 
            }
            if(a[i]==preadv[j][1])
            {
                preadvm[j][1]=i;
            }    

        }
    }
    
    for(int i=0;i<m;i++)
    {
        r[preadvm[i][0]][preadvm[i][1]]=1;
    }
    int col;
    while(iscol(flag))
    {
        
        for(int i=0;i<n;i++)
        {
            if(flag[i][1]==1)
            {
                col=0;
                for(int j=0;j<n;j++)
                {
                    if(r[j][i]==1)
                        col++;
                }
                if(col==0)
                {
                    printf("%d ",flag[i][0]);
                    flag[i][1]=0;
                    for(int h=0;h<n;h++)
                        r[i][h]=0;
                    break;
                }
            }
        }
    }
    printf("\n");


    return 0;
}