// Picking Numbers
// https://www.hackerrank.com/challenges/picking-numbers/problem
// Onkar Nora

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pickingNumbers(int a_count, int a[]) 
{
    int i,j,max=0;
    int f[101];

    for(i=0;i<=100;i++)
        f[i] = 0; 

    for(i=0;i<a_count;i++)
        f[a[i]]++;

    for(i=0;i<100;i++)
        if(f[i]+f[i+1]>max)
            max = f[i]+f[i+1];

    return max;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("%d",pickingNumbers(n,a));

    return 0;
}
