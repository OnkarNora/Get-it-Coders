#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		int num;
		scanf("%d",&num);
		int x=num, z=0, c;
		for(int j=0; x!=0; j++)
		{
			if((x % 10) != 0){
				c=x%10;
				if(num % c == 0)
					z++;
			}
			x/=10;
		}
		printf("%d\n", z);
	}

	return 0;
}