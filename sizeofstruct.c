#include<stdio.h>
struct employee
{
	int emp_id;
	char shift;
	float work_hrs;
	double salary;
};

int main()
{
	struct employee e;

		printf("size of structure:%zu\n",sizeof(e));
		printf("size of int:%zu\n",sizeof(e.emp_id));
		printf("size of char:%zu\n",sizeof(e.shift));
		printf("size of float:%zu\n",sizeof(e.work_hrs));
		printf("size of double:%zu\n",sizeof(e.salary));

		return 0;
}
