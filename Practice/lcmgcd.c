#include<stdio.h>

int findgcd(int a, int b)
{
	int n, g,i;

	if(a<=b)
	{
		n=a;
	}
	else
	{
		n=b;
	}

	for(i=1;i<=n;i++)
	{
		if((a%i==0)&&(b%i==0))
		{
			g=i;
		}
		else
		{
			continue;
		}
	}
	return g;
}

int findlcm(int a, int b)
{

	int n, i, l;
	if(a>=b)
        {
                n=a;
        }
        else
        {
                n=b;
        }

        for(i=n;i>=n;i++)
        {
                if((i%a==0)&&(i%b==0))
                {
                        l=i;
			break;
                }
                else
                {
                        continue;
                }
        }
	return l;
}

int main()
{
	int GCD, LCM;
	int a,b;

	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the value of B:");
	scanf("%d",&b);
	
	GCD= findgcd(a,b);
	printf("GCD of %d and %d is %d.\n",a,b,GCD);

	LCM= findlcm(a,b);
	printf("LCM of %d and %d is %d.\n",a,b,LCM);

	return 0;

}

