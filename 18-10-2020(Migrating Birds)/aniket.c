/*Aniket Suryawanshi
Migratory Birds
https://www.hackerrank.com/challenges/migratory-birds/problem*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],p[n];
    for (i=1;i<=n;i++)
        p[i]=0;
    for (i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for (i=1;i<=n;i++)
    {
       p[a[i]]++;
    }
    int max=p[1],max_index=0;
    for(i=2;i<=n;i++)
    {
        if(max<p[i])
        {
            max=p[i];
            max_index=i;
        }
    }
    printf("%d",max_index);
    return 0;
}
/*11
1 2 3 4 5 4 3 2 1 3 4
3*/
