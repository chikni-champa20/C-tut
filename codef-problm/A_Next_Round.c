#include<stdio.h>
int main()
{
    int n,k,i,p=0;
    scanf("%d %d",&n,&k);
    k--;
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for ( i = 0; i < n; i++)
    {
        if(a[i]>=a[k] && a[i]!=0)
            p++;
        else{
            break;
        }
    }
    printf("%d",p);
    return 0;
}