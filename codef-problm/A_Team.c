#include<stdio.h>
int main()
{
    int p,v,t,sum,n,i;
    sum=0;
    scanf("%d",&n);
    if (n>=1 && n<=1000)    
    {
        for ( i = 0; i < n; i++)
        {
            scanf("%d %d %d",&p,&v,&t);
            if(p+v+t>=2)
                sum++;
        }
    }
    printf("%d",sum);
    return 0;
}