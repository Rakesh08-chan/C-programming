#include<stdio.h>
int main()
{
	int x=5;
	int *p = &x;
	printf("X gives the value of :%d\n",x);
	printf("&X gives the address of x :%p\n",&x);
	printf("*p gives the value stored in the pointer : %d\n",*p);
	return 0;
}
