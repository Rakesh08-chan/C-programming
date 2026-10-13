#include<stdio.h>
int main()
{
	int i, j, n, m, sum ;
	printf("Enter the size of array :");
	scanf("%d",&n);

	printf("enter the sum value to find:");
	scanf("%d",&m);

	int arr[n];

	for(i=0;i<n;i++)
	{
		printf("enter arr element :");
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum= arr[i]+arr[j];
			if(sum!=m)
			{
				continue;
			}
			else
			{
				printf("%d %d\n",i,j);
			}

		}
	}
	return 0;
}





