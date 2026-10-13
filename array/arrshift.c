#include <stdio.h>

void rotateRight(int arr[], int n, int k)
{
    int i, j, temp;

    k = k % n;

    for (i = 0; i < k; i++)
    {
        temp = arr[n - 1];

        for (j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[0] = temp;
    }
}

int main()
{
    int arr[100], n, k, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid array size\n");
        return 1;
    }

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter K: ");
    scanf("%d", &k);

    if (k < 0)
    {
        printf("Invalid K\n");
        return 1;
    }

    rotateRight(arr, n, k);

    printf("Rotated array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

