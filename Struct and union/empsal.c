#include<stdio.h>

struct employee
{
        int id;
        char name[10];
        float sal;
};
 int main()
{
	struct employee s[5];
	int i;
	int max;

	printf("Enter the employee details:\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&s[i].id);
		scanf("%s",s[i].name);
		scanf("%f",&s[i].sal);
	}

	max = 0;
	for(i=1; i<5; i++)
	{
		if(s[max].sal<s[i].sal)
		{
			max = i ;
		}
	}
	printf("ID : %d\n",s[max].id);
	printf("NAME : %s\n",s[max].name);
	printf("SALARY : %.3f\n",s[max].sal);
	return 0;
}


