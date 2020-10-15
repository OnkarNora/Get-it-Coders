// Onkar Nora
//Min Max sum
// https://www.hackerrank.com/challenges/mini-max-sum/problem
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void miniMaxSum(int arr_count, int* arr) 
{
    long int min=0,max=1,i;
    long int minsum=0,maxsum=0;

    for (i=0;i<arr_count;i++)
    {
        if (arr[i]<arr[min])
            min = i;
        if (arr[i]>arr[max])
            max = i;
    }

    for(i=0;i<arr_count;i++)
    {
        if (i==max||i==min)
            continue;
        minsum += arr[i];
        maxsum += arr[i];
    }

    printf("%ld %ld",minsum+arr[min],maxsum+arr[max]);

}


int main()
{
    
    int a[5],i=0;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    miniMaxSum(5,a);
    
    
    return 0;
    
}


/*Sample Output:

*/