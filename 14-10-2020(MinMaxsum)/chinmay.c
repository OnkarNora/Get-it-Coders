// chinmay's code 
// Date : 17/10/2020
#include<stdio.h>

int minMaxSum(int arr[5])
{
	int min = arr[0];
	for(int i=0; i<5; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	int max = arr[0];
	for(int i=0; i<5; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	long int sum=0;
	for(int i=0; i<5; i++)
	{
		sum += arr[i];
	}
	printf("%ld %ld\n", sum-max, sum-min);
}

int main()
{
	int arr[5];
	for(int i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}
	minMaxSum(arr);
	return 0;
}

// OUTPUT

// 1 2 3 4 5
// 10 14