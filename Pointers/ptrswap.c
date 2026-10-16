#include<stdio.h>
void swap(int* p,int* q)
{
        int temp;

	temp= *p;
	*p = *q;
	*q = temp;
}
int main()
{
	int a;
	int b;
	printf("Enter the value A:");
	scanf("%d",&a);
	printf("Enter the value B:");
	scanf("%d",&b);

	printf("Value of A and B before swap: %d,%d\n",a,b);
	swap(&a,&b);
	printf("Value of A and B after swap: %d,%d\n",a,b);

	return 0;
}


