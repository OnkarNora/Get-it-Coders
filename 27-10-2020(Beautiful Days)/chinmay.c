#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int numRev(int x)
{
    int new = 0;// p=0;
    for(int i=0; x!=0; i++)
    {
        new = new*10 /** pow(10,p)*/ +(x%10);
        // p++;
        x/=10;
    }
    return new;
}
int beautifulDays(int a, int s, int d)
{
    int count = 0;
    for(int i=a; i<=s; i++)
    {
        int diff = abs(i-numRev(i));
        if( /*diff / d >=0 &&*/ diff%d == 0)
            count++;
    }
    // printf("%d\n", numRev(a));
    return count;
}
int main()
{
    int a,s,d;
    scanf("%d%d%d",&a,&s,&d);
    printf("%d", beautifulDays(a,s,d));
    return 0;
}