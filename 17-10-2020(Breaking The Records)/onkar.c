// Breaking the Records
// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
// Onkar Nora

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int* breakingRecords(int scores_count, int* scores, int* result_count) {
    int lower_till=scores[0],higher_till=scores[0],lb=0,hb=0,i;
    for(i=0;i<scores_count;i++)
    {
        if (scores[i]<lower_till)
        {
            lower_till = scores[i];
            lb++;
        }
        else if (scores[i]>higher_till)
        {
            higher_till = scores[i];
            hb++;
        }
    }
    int *a = (int *)malloc(2*sizeof(int));
    a[0] = hb;
    a[1] = lb;
    *result_count = 2;
    return a;

}

int main()
{
    int n,result_count;
    scanf("%d",&n);
    int a[n];
    int *b;

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    b = breakingRecords(n,a,&result_count);
    
    for(int i=0;i<result_count;i++)
        printf("%d ",b[i]);
    
    

    return 0;
}
