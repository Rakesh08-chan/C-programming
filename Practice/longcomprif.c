#include<stdio.h>
#include<string.h>
int main()
{
int i,j,num;
int minlen, length=0;

	char str[10][50];
	printf("Enter the number of words to check:");
	scanf("%d",&num);

	printf("Enter the Words:");
	for(i = 0 ; i < num ; i++)
	{
		scanf("%s",str[i]);
	}

	minlen= strlen(str[0]);
	for(i = 1; i < num; i++)
	{
		if(strlen(str[i])<minlen)
		{
			minlen= strlen(str[i]);
		}
	}

	for(j = 0 ; j < minlen ; j++)
        {
		for(i = 1 ; i < num ; i++)
		{
			if(str[0][j] != str[i][j])
			{
				length=1;
				break;
			}
		}
		
		if(length==1)
			break;
	}

	if(j==0)
	{
		printf("-1");
	}
	else
	{
		 for (i = 0; i < j; i++)
		 {
			 printf("%c", str[0][i]);
		 }
	}
	return 0;
}
