#include<stdio.h>
void function( int *ar,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ar + i));
	}
}
int main()
{
	int ar[5]={50,78,56,43,5};
	int n=5;

	function(ar,n);
	return 0;
}


