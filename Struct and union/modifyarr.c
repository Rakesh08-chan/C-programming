#include<stdio.h>
struct student
{
	int id;
	int fee;
};
void passbyvalue(struct student s)
{
	s.id = 10;
	s.fee =25000;
}
void ptr(struct student *s)
{
	s->id = 20;
	s->fee = 19000;
}
int main()
{
	struct student s={11,30000};
	printf("value before passing\n");

	printf("id : %d\n",s.id);
	printf("fee : %d\n",s.fee);
	
	passbyvalue(s);
	printf("value after pass by value\n");
	printf("id : %d\n",s.id);
        printf("fee : %d\n",s.fee);
        
	ptr(&s);
	printf("value after pointer\n");
	printf("id : %d\n",s.id);
        printf("fee : %d\n",s.fee);
	return 0;
}
