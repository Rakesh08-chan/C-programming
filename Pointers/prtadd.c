#include<stdio.h>
int  main()
{
	int a;
	printf("Enter a variable :");
	scanf("%d",&a);
	int *prt = &a;

	printf("The address of %d is %p.",a,prt);
	return 0;
}
	
