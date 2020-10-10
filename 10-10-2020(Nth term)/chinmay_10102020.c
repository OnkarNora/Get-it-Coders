// Chinmay's code
// https://www.hackerrank.com/challenges/recursion-in-c/problem

#include <stdio.h>

int nth_term(int n, int* a, int i)
{
    int x;
    if(i<3)
    {
        i++;
        nth_term(n, a, i);
    }
    else if(i>2 && i<n)
    {
        a[i] = a[i-1] + a[i-2] + a[i-3];
        x = a[i];
        i++;
        nth_term(n, a, i);
    }
    // else
    // {
        // writing return a[n-1]; here gives error 255 --> function nth_term doesn't return int value
    // }
    return a[n-1];
}

int main()
{
    int n;
    // printf("Enter a number from 1 to 20:\n");
    scanf("%d", &n);
    int a[n];
    // printf("enter the first three terms of series :\n");
    for(int i=0; i<3; i++)
    {
        scanf("%d", &a[i]);
    }
    int i=3;
    // --------------------------------------------------
    // Using loop
    // for(int i=3; i<n; i++)
    // {
    //     a[i] = a[i-1] + a[i-2] + a[i-3];
    // }
    // --------------------------------------------------
    // printf("The nth term of considered series is:\n");
    printf("%d\n", nth_term(n,a, i));
    return 0;
}

// OUTPUT

// 5
// 1 2 3
// 11