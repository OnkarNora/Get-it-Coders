// chinmay's code
#include <stdio.h>

int max(int a[5])
{
    int flag = a[1], x=0;
    for(int i=1; i<=5; i++)
    {
        if(flag< a[i])
        {
            flag = a[i];
            x=i;
        }
    }
    return x;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d", &arr[i]);
    }


    int a[10];
    for (int i = 1; i <=5; i++)
    {
        a[i] = 0;
    }


    for (int i = 1; i <=n; i++)
    {
            a[arr[i]]++;
    }
    int x = max(a);
    printf("%d\n",x);
    
    return 0;
}