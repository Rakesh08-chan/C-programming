#include<stdio.h>
void revnum(int *r)
{
	int dup=*r;
	*r= 0;
	while(dup>0)
	{
		*r=(*r)*10+(dup%10);
			dup=dup/10;
	}

}
int main()
{
	int a;
	printf("Enter a nu to reverse : ");
	scanf("%d",&a);

	revnum(&a);
	printf("%d\n",a);
	return 0;
}

