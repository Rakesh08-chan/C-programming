#include<stdio.h>

struct date
{
	int day;
	int month;
	int year;
};
int main()
{
	struct date d1;

	printf("Enter day: ");
	scanf("%d",&d1.day);
	printf("Enter month: ");
        scanf("%d",&d1.month);
	printf("Enter year: ");
        scanf("%d",&d1.year);

	printf("%d/%d/%d.",d1.day,d1.month,d1.year);
	return 0;
}
