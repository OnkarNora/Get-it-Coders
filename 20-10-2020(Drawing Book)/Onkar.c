// Drawing Book
// https://www.hackerrank.com/challenges/drawing-book/problem
// Onkar Nora

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pageCount(int n, int p) 
{
    if(n/2>=p)
    {
        return p/2;
    }
    else 
    {
        if(n%2==0)
            n++;
        if(p%2==0)
            p++;
        return (n-p)/2;
    }
}

int main()
{
    int n,p;

    scanf("%d%d",&n,&p);

    printf("%d",pageCount(n,p));

    return 0;
}
