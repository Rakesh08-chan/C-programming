#include <stdio.h>

int factorial(int n)
{
    int i, fact= 1;

    for (i= 1; i<=n; i++)
    {
        fact= fact*i;
    }

    return fact;
}

int isstrongnumber(int n)
{
    int num= n;
    int dig, sum= 0;

    while(n>0)
    {
        dig= n%10;              
        sum=sum + factorial(dig);
        n= n/10;                  
    }

     if(sum==num)
    {
        printf("%d is a Strong Number\n", num);
    }
    else
    {
        printf("%d is not a Strong Number\n", num);
    }

}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    isstrongnumber(n);

    return 0;
}

