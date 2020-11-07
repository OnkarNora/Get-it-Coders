#include <stdio.h>
#include <stdlib.h>
int utopianTree(int n,int h)
{
    int i;
    for(i=1;i<=n;i++)
        {
            if(i%2==0)
               h++;
            else
               h*=2;
        }
    return (h);
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        int h=1;
        scanf("%d",&n);
        printf("%d\n",utopianTree(n,h));
    }
    return 0;
}
