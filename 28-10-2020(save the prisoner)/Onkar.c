// Save the prisoner
// https://www.hackerrank.com/challenges/save-the-prisoner/problem
// Onkar Nora

#include <stdio.h>

int saveThePrisoner(int n, int m, int s) 
{
    return ((s+m-1)%n == 0) ? n : (s+m-1)%n;
}
int main()
{
    int tc;
    scanf("%d",&tc);

    while(tc--)
    {
        int n,m,s;
        scanf("%d%d%d",&n,&m,&s);

        printf("%d\n",saveThePrisoner(n, m, s));
    }
    
    return 0;
}