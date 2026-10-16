#include<stdio.h>
int main()
{
	int n=10;
	int *ptr=&n;
	int **ptrptr= &ptr;
	
	printf("%d\n",**ptrptr);
	return 0;

}
