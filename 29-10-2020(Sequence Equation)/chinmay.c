#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int p[n];
    for(int i=1; i<=n; i++)
        scanf("%d", &p[i]);
    int flag = 0, flag2 = 0;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i == p[j])
                flag = j;
        }
        for(int k=1; k<=n; k++)
        {
            if(flag == p[k])
                flag2 = k;
        }
        printf("%d\n", flag2);
    }
    return 0;
}
