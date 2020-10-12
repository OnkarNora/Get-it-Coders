// Onkar Nora
// https://www.hackerrank.com/challenges/diagonal-difference/problem
// Diagonal Difference
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int i,j,sumr=0,suml=0;
    for(i=0;i<arr_rows;i++)
    {
        for(j=0;j<arr_columns;j++)
        {
            if (i==j)
                sumr += arr[i][j];
            if (j == ((arr_columns-1)-i)) 
                suml += arr[i][j];
        }
    }
    if (sumr>suml)
        return sumr-suml;
    return suml-sumr;
}

int main()
{
    int n,i,j;
    scanf("%d",&n);

    int** arr = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) 
        *(arr + i) = malloc(n * (sizeof(int)));

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);

    printf("%d",diagonalDifference(n,n,arr));
    
    
    return 0;
    
}


/*Sample Output:

*/