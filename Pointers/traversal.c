#include<stdio.h>
void traversal(int *arr,int n)
{
        int i;
        int max= arr[0];
        for(i= 0; i<n; i++)
        {
                if(max<= *arr)
                {
                        max= *arr;
                }
                arr++;
        }
        printf("max num is %d.\n",max);
}

int main()
{
        int arr[5];


        printf("Enter 5 elements :");
        for(int i=0;i<5;i++)
        {
                scanf("%d",&arr[i]);
        }
        traversal(arr,5);
        return 0;
}
