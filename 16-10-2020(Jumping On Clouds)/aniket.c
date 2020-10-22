//Aniket Suryawanshi
//Jumping on the Clouds
//https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    while(i<n)
    {
        if(a[i+2]==0&&(i+2)<n)
        {
            c=c+1;
            i=i+2;

        }
        else if((i+1)<n)
        {
            c=c+1;
            i++;
        }
        else
        {
            i++;
        }
    }
    printf("%d",c);
    return 0;
}
/*7
0 0 1 0 0 1 0
4*/
