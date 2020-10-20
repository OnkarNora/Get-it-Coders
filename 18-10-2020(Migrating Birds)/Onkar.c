// Migratory Birds
// https://www.hackerrank.com/challenges/migratory-birds/problem
// Onkar Nora

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int migratoryBirds(int arr_count, int* arr) 
{
    int f[5]={0,0,0,0,0};
    int i;

    for(i=0;i<arr_count;i++)
        f[arr[i]-1]++;

    int max=f[0],max_index=0;

    for(i=0;i<5;i++)
    {
        if(f[i]>max)
        {
            max=f[i];
            max_index=i;
        }
    }

    return max_index+1;
}

int main()
{
    int i,n;
    scanf("%d",&n);

    int a[n];

    for (i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("%d",migratoryBirds(n,a));

    return 0;
    
}


/*Sample Output:

*/