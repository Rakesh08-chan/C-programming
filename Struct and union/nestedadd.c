#include<stdio.h>
struct address
{
	char city[20];
	int pin;
};
struct std
{
	char name[20];
	int roll ;
	struct address a;
};
int main()
{
	struct std s;
	printf("Enter Name:");
	scanf("%s",s.name);
	printf("Enter roll:");
	scanf("%d",&s.roll);
	printf("Enter city:");
	scanf("%s",s.a.city);
	printf("Enter pin:");
	scanf("%d",&s.a.pin);

	printf("Name: %s\n",s.name);
	printf("Roll: %d\n",s.roll);
	printf("City: %s\n",s.a.city);
	printf("Pin: %d\n",s.a.pin);
	return 0;
}


