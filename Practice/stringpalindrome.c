#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[50];
	int i, length = 0, fact = 0;

	printf("Enter the word to check: ");
	scanf("%s",str);

	while(str[length] != '\0') 
	{
		length++;
	}

	for(i = 0 ; i < length ; i++)
	{
		str[i] = tolower(str[i]);
	}


	for(i = 0 ; i < length/2 ; i++)
	{
		if(str[i] != str[length-i-1])
		{
			fact++;
			break;
		}
	}

	if(fact == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}
