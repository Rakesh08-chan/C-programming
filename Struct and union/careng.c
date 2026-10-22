#include<stdio.h>
struct engine
{
	float capacity;
	int milage;
	float torque;
};
struct car
{
        char model[10];
	int year;
	struct engine e;
};

int main()
{
	struct car c;
	printf("Enter Model name :");
	scanf("%s",c.model);
	printf("Enter year :");
        scanf("%d",&c.year);
	printf("Enter Capacity :");
        scanf("%f",&c.e.capacity);
	printf("Enter Milage :");
        scanf("%d",&c.e.milage);
	printf("Enter Torque :");
        scanf("%f",&c.e.torque);

	printf("\nDetails\n");
	
	printf("Model Name:Hundai %s\n",c.model);
	printf("Model Year:%d\n",c.year);
	printf("Engine capacity:%.1fl\n",c.e.capacity);
	printf("Milage:%dKm/l\n",c.e.milage);
	printf("Engine torque:%.1fNm\n",c.e.torque);
	return 0;
}
