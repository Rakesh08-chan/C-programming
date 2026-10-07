#include<stdio.h>
int main()
{
	char ch1;
	char ch2;
	int sum;
	
	printf("enter a char 1:");
	scanf(" %c",&ch1);

	printf("enter a char 2:");
	scanf(" %c",&ch2);

	sum= ch1+ch2; 
	printf("Sum of ASCII is %d\n",sum);

	return 0;
}
