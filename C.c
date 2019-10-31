#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char str[10001],a,b,x;
    scanf("%s",str);
    int m,map[256];
    for (int i = 0; i < 256; i++)
    {
        map[i] = -1;
    }
    
    scanf("%d",&m);
    for (int i = 0; i < m; i++)
    {
        scanf(" %c %c",&a,&b);
        map[a] = b;
    }
    
    for (int i = 0; i < strlen(str); i++)
    {
        x = str[i];
        while(map[x]!=-1){
            x = map[x];
        }
        str[i]=x;
    }
    
    printf("%s",str);

    return 0;
}