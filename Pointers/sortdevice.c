#include<stdio.h>
#include<string.h>
void sortwords(char *words[],int n)
{
	int i, j, k, flag;
	char *temp;

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			k=0;
			while(words[j][k]==words[j+1][k])
			{
				k++;
			}
			flag=0;
			
			if(words[j][k] > words[j + 1][k])
			{
				flag=1;
			}
			if(flag)
			{
				temp=words[j];
				words[j] = words[j+1];
				words[j+1]= temp;
			}
		}
	}
}

int main()
{
	int i, n;
        char *words[10];
        char devices[10][50];

        printf("Enter the value of N: ");
        scanf("%d", &n);

	if (n<1 || n>10)
	{
		printf("Invalid num.. Enter within 0 to 10 \n");
		return 1;
	}

	printf("Enter the name of devices: ");
	for(i=0; i<n ; i++)
	{
		scanf("%s",devices[i]);
		words[i]=devices[i];
	}

	sortwords(words, n);
	printf("Sorted names: ");
	
	for (i = 0; i < n; i++)
	{
		printf("%s ", words[i]);
	}
	printf("\n");
	return 0;
}


