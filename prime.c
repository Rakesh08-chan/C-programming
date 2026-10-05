#include<stdio.h>

int main()
{
	int i, n, count=0;
	printf("enter the num:");
	scanf("%d",&n);

	for(i=2;i<n;i++)
	{
		if(n%i !=0)
		{
			continue;
		}

		else
		{
			count++;
			printf("it is not prime number");
			break;
		}
	}

		if(count==0)
			printf("prime");

	return 0;
}

