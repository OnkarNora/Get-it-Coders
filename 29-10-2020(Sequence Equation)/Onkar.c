// Sequence Equation
// https://www.hackerrank.com/challenges/permutation-equation/problem
// Onkar Nora

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* permutationEquation(int p_count, int p[] ) 
{
    int i,j;
    int *y_array = (int *)malloc(p_count*sizeof(int));

    for(i=0;i<p_count;i++)
    {
        for(j=0;j<p_count;j++)
        {
            if (p[j]==i+1)
            {
                y_array[p[i]-1] = j+1;
            }
        }   
    }
    return y_array;
}

int main()
{
    int n;
    scanf("%d",&n);

    int p[n],*result;
    for(int i=0;i<n;i++)
        scanf("%d",&p[i]);

    result = permutationEquation(n, p);

    for(int i=0;i<n;i++)
        printf("%d\n",result[i]);
}