//Aniket Suryawanshi
//Breaking the Records
//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,best=0,worst=0,max,min,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=max=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i]&&min!=a[i])
        {
            min=a[i];
            worst++;
        }
        if(max<a[i]&&max!=a[i])
        {
            max=a[i];
            best++;
        }
    }
    printf("%d %d",best,worst);
    return 0;
}
/*9
10 5 20 20 4 5 2 25 1
2 4*/
