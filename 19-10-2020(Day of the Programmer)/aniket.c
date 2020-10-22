/*Aniket Suryawanshi
Day of the Programmer
https://www.hackerrank.com/challenges/day-of-the-programmer/problem*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    scanf("%d",&year);
    if(year==1918)
        printf("26.09.1918");
    else if(year<1918)
    {
        if(year%4==0)
            printf("12.09.%d",year);
        else
            printf("13.09.%d",year);
    }
    else
    {
        if((year%400==0)||(year%4==0&&year%100!=0))
            printf("12.09.%d",year);
        else
            printf("13.09.%d",year);
    }
    return 0;
}
/*2017
13.09.2017*/
