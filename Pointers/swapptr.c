#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a,b;

	printf("Enter a value for A:");
	scanf("%d",&a);
	printf("Enter a value for B:");
	scanf("%d",&b);

	printf("Values before swap:\n");
	printf("A = %d\n",a);
	printf("B = %d\n",b);

	swap(&a,&b);
	printf("Values after swap:\n");
	printf("A = %d\n",a);
        printf("B = %d\n",b);

	return 0;
}

