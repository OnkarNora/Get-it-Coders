#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
	for(int l=0; l<n; l++)
	{
		char str[10005];
		scanf("\n%[^\n]s", &str);
		int l1 = strlen(str), j=0;
		char str1[10005]; 
		for(int i=l1-1; i>=0; i--,j++)
		{
			str1[j] = str[i];
		}
		str1[j] = '\0';
		int flag =0;

		for(int i=0; i<l1-2; i++)
		{
			int f = abs(str[i] - str[i+1]);
			
			int r = abs(str1[i] - str1[i+1]);
			if(f != r)
			{
				printf("Not Funny\n");
				flag = 1;
				break;
			}
			
		}
		if(flag == 0)
			printf("Funny\n");
	}
	return 0;
}