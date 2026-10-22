#include<stdio.h>

void callby(int *p)
{
	(*p)++;
}

int main()
{
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);

	printf("value before increment :%d\n",a);

	callby(&a);

	printf("value after increment :%d\n",a);
	return 0;
}

