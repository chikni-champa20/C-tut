#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int a[5][5],b[2]={-1};

    for ( i = 0; i < 5; i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                b[0]=i;b[1]=j;
            }
        }
    }
    printf("%d",abs(b[0]-2)+abs(b[1]-2));

    
    return 0;
}
