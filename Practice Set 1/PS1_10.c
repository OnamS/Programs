#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-1-i]=temp;
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}