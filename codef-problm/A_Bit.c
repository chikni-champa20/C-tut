#include<stdio.h>

int main()
{
    int n,x=0;
    char s[4];
    scanf("%d",&n);
    if(n>=1 && n<=150){
        for(int i=1;i<=n;i++){
            scanf("%s",s);
            if(s[0]=='+'||s[1]=='+')
                x++;
            else
                x--;
        }
    }
    printf("%d",x);
    return 0;
}