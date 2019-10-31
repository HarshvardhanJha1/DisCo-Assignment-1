#include<stdlib.h>
#include<stdio.h>

int a[1000];
int p[1000];
int c[1000];
int r[100][100];
int col[1000];
int n,m;
int iscol(int x)
{
    int g=0;
    for(int i=1;i<col[x];i++)
    {
        if(r[x][i]!=0)
        {
            g=1;
        }
    }
    return g;
}
void update(int w)
{
    int q=r[w][0];
    r[w][0]=r[n][0];
    r[n][0]=q;
    int z=col[w];
    col[w]=col[n];
    col[n]=z;
    if(col[w]>col[n])
    {
        for(int u=1;u<col[w];u++)
        {
            int f=r[w][u];
            r[w][u]=r[n][u];
            r[n][u]=f;
        }
    }
    else
    {
        for(int u=1;u<col[n];u++)
        {
            int f=r[w][u];
            r[w][u]=r[n][u];
            r[n][u]=f;
        }
    }
    
    for(int g=0;g<n;g++)
    {
        for(int d=0;d<col[g];d++)
        {
            if(r[g][d]==r[n][0])
            {
                r[g][d]=0;
            }
        }
    }
}
int main()
{
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf(" %d",&a[i]);
        r[i][0]=a[i];

    }
    scanf(" %d",&m);
    for(int i=0;i<m;i++)
    {
        scanf(" %d %d",&p[i],&c[i]);

    }
    
    int k;
    for(int i=0;i<n;i++)
    {
        k=1;
        for(int j=0;j<m;j++)
        {
            if(c[j]==a[i])
            {
                r[i][k]=p[j];k++;
            }
        }
        col[i]=k;
    }
    //check if default elements of r are 0;
        int y;
        while(n>0)
         {
             y=0;
            while(y<n)
            {
                if(iscol(y)==0)
                {
                    printf("%d ",r[y][0]);
                    n--;
                    update(y);
                    break;
                }
                else
                {
                    y++;
                }
                
            }    
         } 
         printf("\n");

    return 0;


}