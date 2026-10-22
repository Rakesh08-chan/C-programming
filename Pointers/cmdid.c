#include <stdio.h>
typedef void (*commandhandler)();
void ledon()
{
    printf("LED ON\n");
}

void ledoff()
{
    printf("LED OFF\n");
}

void reset()
{
    printf("RESET\n");
}

void status()
{
    printf("STATUS OK\n");
}

void dispatch(commandhandler table[], int tableSize, int cmdid)
{
    switch (cmdid)
    {
        case 0:
            if (cmdid < tableSize)
                table[0]();
            else
                printf("Invalid Command\n");
            break;

        case 1:
            if (cmdid < tableSize)
                table[1]();
            else
                printf("Invalid Command\n");
            break;

        case 2:
            if (cmdid < tableSize)
                table[2]();
            else
                printf("Invalid Command\n");
            break;

        case 3:
            if (cmdid < tableSize)
                table[3]();
            else
                printf("Invalid Command\n");
            break;

        default:
            printf("Invalid Command\n");
    }
}

int main(void)
{
    commandhandler table[4] = {ledon, ledoff, reset, status};

    int cmdid;

    printf("Enter command ID: ");
    scanf("%d", &cmdid);

    dispatch(table, 4, cmdid);

    return 0;
}

