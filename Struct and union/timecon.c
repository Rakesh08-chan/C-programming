#include<stdio.h>

struct time
{
	int hrs;
	int mins;
};
int main()
{
	struct time t1;
	int hrt;
	int mint, sec;
	printf("Enter the time in hrs:mins format :");
	scanf("%d%d",&t1.hrs,&t1.mins);

	hrt= t1.hrs * 60*60;
	mint= t1.mins * 60;
	sec= hrt+ mint;

	printf("Total time in seconds is %d.\n",sec);
	return 0;
}

