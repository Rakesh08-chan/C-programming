#include<stdio.h>

struct student{
	int roll;
	char name[50];
	float mark;
};
int main()
{
	struct student s[5];
	int i;
	printf("Enter the student details :\n");
	for(i=1; i<=5; i++)
	{
		printf("Enter Roll num :");
		scanf("%d",&s[i].roll);

		printf("Enter Name :");
                scanf("%s",s[i].name);

		printf("Enter mark :");
                scanf("%f",&s[i].mark);
	}
	
	for(i=1; i<=5; i++)
	{
		printf("Roll num: %d\n",s[i].roll);
		printf("Name: %s\n",s[i].name);
		printf("Mark: %.2f\n",s[i].mark);
	}
	return 0;
}


