#include<stdio.h>
int main()
{
	int n, sum, maxsum;
	int i, arr[50];

	printf("Enter the number of element : ");
	scanf("%d",&n);

	printf("Enter the Elements :");
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}

	sum = arr[0];
	maxsum = arr[0];

	for(i = 1 ; i < n; i++)
	{
		if(sum + arr[i] < arr[i])
		{
			sum = arr[i];
		}
		else
		{
			sum = sum + arr[i];
		}
		
		if(sum > maxsum)
		{
			maxsum = sum;
		}
	}

	printf("The maximum sum of contigues subarray is %d.\n",maxsum);

	return 0;
}

