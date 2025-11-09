#include<stdio.h>

void ArrRev(int arr[], int size){
    int i;
    for( i =0;i<size/2;i++){
        arr[i]+=arr[size-1-i];
        arr[size-1-i]= arr[i]-arr[size-1-i];
        arr[i]-=arr[size-1-i];
    }
    for ( i = 0; i < size; i++){
        printf("arr[%d]: %d\n",i+1,arr[i]);
    }    
}

int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter %d numbers :\n",n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array recieved: \n");
    for (int i = 0; i < n; i++){
        printf("arr[%d]: %d\n",i+1,arr[i]);
    }
    
    printf("The reversed array is: \n");
    ArrRev(arr,n);
    return 0;
}
