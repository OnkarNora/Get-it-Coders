#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int c[n];
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&c[i]);
	}
	int jumps = 0;
	int i=1;
	while(i<n)
	{
		if(c[i+2] == 0)
		{
			jumps++;
			i = i+2;
		}
		else
		{
			jumps++;
			i++;
		}		
	}
	printf("%d\n", jumps);
	return 0;
}
// 7
// 0 0 1 0 0 1 0
// 6
// 0 0 0 1 0 0