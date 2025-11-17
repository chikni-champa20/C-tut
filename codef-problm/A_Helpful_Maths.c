#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    scanf("%s",str);
    int len=strlen(str);
    int o=0,w=0,t=0,i;
    for (i = 0; i<len ; i++)
    {
        if(str[i]=='1'){
            o++;
        }
        if (str[i]=='2')
        {
            w++;
        }
        if (str[i]=='3')
        {
            t++;
        }
        
    }
    w+=o;
    t+=w;
    for ( i = 0; i < t; i++){
        if(i!=0)
            printf("+");
        
        if(i<o && o!=0)
            printf("1");
        else if(i<w && w!=0)
            printf("2");
        else if(i<t && t!=0)
            printf("3");
    }
    
    
    return 0;
}