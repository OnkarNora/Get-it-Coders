// Beautiful Days
// https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
// Onkar Nora

#include <stdio.h>
#include <stdlib.h>

int beautifulDays(int i, int j, int k) 
{
    int temp,rev=0,result=0;

    for(i=i;i<=j;i++)
    {
        temp = i;
        rev = 0;

        while(temp!=0)
        {
            rev = rev*10 + temp%10;
            temp /= 10;
        }

        if (abs(i-rev)%k==0)
            result++;
    }

    return result;
    
}

int main()
{
    int i,j,k;

    scanf("%d%d%d",&i,&j,&k);

    printf("%d",beautifulDays(i, j, k));

    return 0;
}