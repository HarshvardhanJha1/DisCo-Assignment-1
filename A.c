#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long a[22];
    long long subsetsum[1000000];
    int  val[22];
    int n,k;
    int j;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf(" %lld",&a[i]);
    }
    
    long long min= 10000001;
    long long pos=-1;
    for(int i=1;i<(1<<n);i++)
    {
        j=i;
        subsetsum[i]=0;
        for(int h=0;h<n;h++)
        {
            if(j%2==1)
            subsetsum[i]+=a[n-1-h];
            j=j/2;
        }
        if(subsetsum[i]<=k)
        {
            if((k-subsetsum[i])<min)
            {
                min=k-subsetsum[i];
                pos=i;
            }
        }
    }
    int ct=0;
    j=pos;
    for(int y=0;y<n;y++)
    {
        if(j%2==1)
        {
            val[n-1-y]=1;
            ct++;
        }    
        else
        {
            val[n-1-y]=0;
        }
        
        j=j/2;
    }
    printf("%d ",ct);printf("\n");
    for(int y=0;y<n;y++)
    {
         if(val[y]==1)
         printf("%d ",y+1);
    }
   
    printf("\n");
    return 0;

}