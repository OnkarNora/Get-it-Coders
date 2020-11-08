// Equality in a array
// https://www.hackerrank.com/challenges/equality-in-a-array/problem
// Onkar Nora

#include <stdio.h>

int equalizeArray(int arr_count, int* arr) {
    int i;
    int f[150];

    for(i=0;i<150;i++)
        f[i]=0;
    
    for(i=0;i<arr_count;i++)
        f[arr[i]]++;
        
    int max=f[0];
    for(i=0;i<150;i++)
        if (max<f[i])
            max=f[i];
            
    return arr_count-max;     
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d",equalizeArray(n, a));
    
    return 0;
}