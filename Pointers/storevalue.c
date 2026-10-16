#include<stdio.h>
int main()
{
	int a;
        int *point = &a;
	printf("Enter the value :");
	scanf("%d",*point);

	printf("%d",a);
	return 0;
}
