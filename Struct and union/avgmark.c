#include<stdio.h>
struct mark
{
	float marks;
};
int main()
{
	struct mark m[20];
	int i,n;
	float sum=0;
	printf("Enter the num of students:");
	scanf("%d",&n);

	printf("Enter marks\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&m[i].marks);
	}

	for(i=0;i<n;i++)
	{
		sum= sum+m[i].marks;
	}
	printf("Average mark is %f", sum/n);
	return 0;
}

