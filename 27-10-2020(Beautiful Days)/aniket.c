/*Aniket Suryawanshi
Beautiful Days at the Movies
https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Bday(int i,int j,int k)
{
    int p,r,sum=0,c=0,avg;
    for(p=i;p<=j;p++)
    {
        int q=p;
        while(q!=0)
        {
            r=q%10;
            sum=(sum*10)+r;
            q=q/10;
        }
        avg=abs(p-sum);
        if(avg%k==0)
            c++;
        sum=0;
    }
    return (c);
}
int main()
{
    int i,j,k;
    scanf("%d%d%d",&i,&j,&k);
    printf("%d",Bday(i,j,k));
    return 0;
}
/*13 45 3
33*/
