#include<stdio.h>
#include<math.h>

int main()
{

	int n, copy, rev=0;

	printf("Enter the number:");
	scanf("%d",&n);

	copy=n;

	while(copy>0)
	{
		rev=rev*10;
		rev= rev+(copy%10);
		copy= copy/10;
	}

	printf("reversed num is :%d\n", rev);

	if(rev==n)
	{
	printf("the num is a palindrome");
	}

	else
	{
	printf("the num is nt a palindrome");
	}

	return 0;
}
