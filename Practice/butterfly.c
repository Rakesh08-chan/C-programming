#include<stdio.h>

void printbutterfly(int n)
{
	int i, j ;

	for(i=1; i<=n; i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=1;j<=2*(n-i);j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
                {
                        printf("*");
                }
		printf("\n");
	}
	for(i=n-1;i>0;i--)
	{
		for(j=1;j<=i;j++)
                {
                        printf("*");
                }
                for(j=1;j<=2*(n-i);j++)
                {
                        printf(" ");
                }
                for(j=1;j<=i;j++)
                {
                        printf("*");
                }
                printf("\n");
	}
}



int main()
{
	int n;
	
	printf("Enter a Number:");
	scanf("%d",&n);
	
	if(n>0)
	{
		printbutterfly(n);
	}
	else
	{
		printf("Invalid number....!\n Please enter a positive number");
	}

	return 0;
}

