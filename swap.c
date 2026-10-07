#include<stdio.h>
int main()
{
	int a= 25;
	int b= 40;
	int temp;
	
	printf("value of a before swap:%d\n",a);
        printf("value of b before swap:%d\n",b);
	
	temp= a;
	a= b;
	b= temp;

	printf("value of a after swap:%d\n",a);
	printf("value of b after swap:%d\n",b);

	return 0;
}
