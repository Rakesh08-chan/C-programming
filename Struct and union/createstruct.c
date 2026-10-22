#include<stdio.h>

struct student
{
	int id;
	char name[10];
	float mark;
};
int main()
{
	struct student s1;
	printf("Enter the ID, Name, Mark of student:\n");

	scanf("%d %s %f", &s1.id, s1.name, &s1.mark);

	printf("ID : %d\n",s1.id);
	printf("Name : %s\n",s1.name);
	printf("Mark : %.2f\n",s1.mark);
	return 0;
}
