#include<stdio.h>
void ans(int a, int b, float *qua, float *rem)
{
	*qua = a/b;
	*rem = a%b;
}
int main()
{
	int a,b;
	float qua,rem;
	printf("Enter the value of A :");
	scanf("%d",&a);
	printf("Enter the value of B :");
        scanf("%d",&b);

	ans(a,b,&qua,&rem);
	printf("Quatient : %.2f\n",qua);
	printf("Remainder : %.2f\n",rem);

	return 0;
}
