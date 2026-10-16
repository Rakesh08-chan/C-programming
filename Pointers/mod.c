#include<stdio.h>
void modify(int* p)
{
	*p =111;
}
int main()
{
	int n=10;
	printf("Value of n before modify : %d\n",n);
	modify(&n);
	printf("Value of n after modify : %d\n",n);
	return 0;
}

