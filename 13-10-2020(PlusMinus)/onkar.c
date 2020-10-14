// Onkar Nora
//Plus Minus
// https://www.hackerrank.com/challenges/plus-minus/problem
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void plusMinus(int n, int* a) 
{
    float p_count=0,n_count=0,z_count=0;

    for(int i=0;i<n;i++)
    {
        if (a[i]<0)
            n_count++;
        else if (a[i]>0)
            p_count++;
        else
            z_count++;
    }

    printf("%f\n",p_count/n);
    printf("%f\n",n_count/n);
    printf("%f\n",z_count/n);
}


int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    plusMinus(n,a);
    
    
    return 0;
    
}


/*Sample Output:

*/