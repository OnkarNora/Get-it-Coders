//Aniker suryawanshi
//Mini-Max Sum
//https://www.hackerrank.com/challenges/mini-max-sum/problem
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,max,min,a[5],i;
    long int sum=0;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    min=max=a[0];
    for(i=0;i<5;i++)
    {
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];

    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("%ld% ld",sum-max,sum-min);
    return 0;
}
/*1 3 5 7 9
16 24*/
