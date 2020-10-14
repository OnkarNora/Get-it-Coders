#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int a[N][N];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int d1 = 0, d2 = 0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(i==j)
            {
                d1 = d1 + a[i][j];
            }
            if(j == N-1-i)
            {
                d2 = d2 + a[i][j];
            }
        }
    }
    int absolute_diff = (d1>d2) ? (d1-d2) : (d2-d1);
    printf("%d\n", absolute_diff);
    return 0;
}