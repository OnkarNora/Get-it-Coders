// utopian Tree
// https://www.hackerrank.com/challenges/utopian-tree/problem
// Onkar Nora

#include <stdio.h>

int utopianTree(int n) {
    if (n==0)
        return 1;
        
    if (n%2==0)
        return (utopianTree(n-1) + 1);
    else
        return (utopianTree(n-1) * 2);
}

int main()
{
    int tc;
    scanf("%d",&tc);

    while(tc--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",utopianTree(n));
    }

    return 0;   
}