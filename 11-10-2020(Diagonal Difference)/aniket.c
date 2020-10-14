//Aniket Suryawanshi
//https://www.hackerrank.com/challenges/diagonal-difference/problem
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,a[100][100],i,j,sum=0,addition=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)==(n-1))
            {
                addition+=a[i][j];
            }
        }
    }
    printf("%d",abs(sum-addition));

    return 0;
}
