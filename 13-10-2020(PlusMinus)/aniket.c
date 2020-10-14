//Aniket Suryawanshi
//https://www.hackerrank.com/challenges/plus-minus/problem
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float b=0,c=0,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            b++;
        if(a[i]==0)
            c++;
        if(a[i]<0)
            d++;

    }
    printf("%f\n%f\n%f",(b/n),(d/n),(c/n));
    return 0;
}
/*5
0 0 -1 1 1
0.400000
0.200000
0.400000*/
