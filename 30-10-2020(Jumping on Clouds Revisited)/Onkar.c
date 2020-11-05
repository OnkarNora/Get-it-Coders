// Jumping On The Clouds Revisited
// https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
// Onkar Nora

#include <stdio.h>

int jumpingOnClouds(int n, int* c, int k) 
{
    int i=(i+k)%n;
    int e = 100;
    
    while(i)
    {
        if (c[i]==1)
            e -= 3;
        else 
            e--;
        i = (i+k)%n;
    }
    
    return c[i]==1 ? e-3 : e-1;
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int c[n];
    for(int i=0;i<n;i++)
        scanf("%d",&c[i]);
        
    printf("%d",jumpingOnClouds(n, c, k));
    
    return 0;
}