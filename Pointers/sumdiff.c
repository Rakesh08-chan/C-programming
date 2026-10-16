#include<stdio.h>

void sumdiff(int a,int b, int *sum, int *diff)
{
	*sum= a+b;
	*diff = a-b;
}
int main()
{
	int a,b;
	int sum, diff;
	printf("Enter the value of A :");
	scanf("%d",&a);
	printf("Enter the value of B :");
	scanf("%d",&b);

	sumdiff(a,b,&sum,&diff);

	printf("Sum of values is : %d\n",sum);
	printf("Diff of values is : %d\n",diff);

	return 0;
}
