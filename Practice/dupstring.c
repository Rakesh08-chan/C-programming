#include<stdio.h>
#include<string.h>

void removeduplicate (char str[])
{
	int length,i,j,k;

	length = strlen(str);

	for(i = 0 ; i < length ; i++)
	{
		for(j = i+1 ; j < length ;)
		{
			if(str[i] == str[j])
			{
				for(k = j ; k < length ; k++)
				{
					str[k]=str[k+1];
				}
				length--;
			}
			else
			{
				j++;
			}
		}
	}
	
	printf("The entered string without duplicate is %s\n",str);
}

int main()
{
	char str[50];
	printf("Enter the string:");
	scanf("%s",str);

	removeduplicate(str);

	return 0;
}

