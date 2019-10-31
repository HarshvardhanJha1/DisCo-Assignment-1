#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int x = n-2;
    char characters[x];
    int k=0;
    char ch;
    for(int i=0;i<n;i++)
    {
        scanf(" %c",&ch);
        if(ch!='M'&&ch!='B')
        {
            characters[k]=ch;
            k++;
        }
    }
    
    //all characters outside of M and B have been scanned
    char arrm[12];
    char arrb[12];
    int ct1,indb,indc,indm;
    int temp;
    for(int i=0;i<(1<<(x));i++)
    {
        ct1=0;
        temp = i;
        while(temp>0)
        {
            if(temp%2)
            {
                ct1++;
            }
            temp=temp/2;
        }
        //printf("%d ",ct1);
        if (ct1==x/2)
        {
            temp=i;
            indb=0;
            indc=x-1;
            indm=0;
            for(int r=0;r<x;r++)
            {
                
                if(temp%2)
                {
                    arrb[indb]=characters[indc];
                    indc--;
                    indb++;
                }
                else
                {
                    arrm[indm]=characters[indc];
                    indc--;
                    indm++;
                }
                temp=temp>>1;
            }
            printf("M: ");
            for(int k=0;k<x/2;k++)
            {
                printf("%c ",arrm[k]);
            }
            printf("| B: ");
            for (int k = 0; k < x/2; k++)
            {
                printf("%c ",arrb[k]);
            }
            printf("\n");

        }

        }
        return 0;
    }