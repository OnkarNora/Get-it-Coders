#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    float p=0, n=0, z=0;
    for(int i=0; i<N; i++)
    {
        if(a[i]==0)
        {
            z++;
        }
        else if(a[i]<0)
        {
            n++;
        }
        else
        {
            p++;
        }
    }
    printf("%f\n%f\n%f\n", p/N, n/N, z/N);
    return 0;
}