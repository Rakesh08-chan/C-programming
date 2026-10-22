#include <stdio.h>

int global = 10;

void demo()
{
    static int stat = 0;

    int local = 20;

    stat++;

    printf("Global variable = %d\n", global);
    printf("Local variable = %d\n", local);
    printf("Static variable = %d\n\n", stat);
}

int main()
{
    demo();
    demo();

    return 0;
}
