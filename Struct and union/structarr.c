#include<stdio.h>
struct details
{
	char name[20];
	int roll;
};
void disp()
{
	struct details d1;
	printf("Enter name and roll number :");
	scanf("%s%d",d1.name,&d1.roll);
	
	printf("Name : %s\n",d1.name);
	printf("Roll number : %d\n",d1.roll);
}
int main()
{
	disp();
	return 0;
}
