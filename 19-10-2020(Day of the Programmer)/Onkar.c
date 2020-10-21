// Day of the Programmer
// https://www.hackerrank.com/challenges/day-of-the-programmer/problem
// Onkar Nora

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int leap(int n)
{
    if (n%4==0&&n<1918)
        return 1;
    if (n%400==0&&n>1918)
        return 1;
    if (n%4==0&&n%100!=0&&n>1918)
        return 1;
    
    return 0;    
}

char* dayOfProgrammer(int year) {
    if (year==1918)
        return "26.09.1918";

    char temp[100];
    char date[100]="13.09.2020";
    char *res=(char*)malloc(100*sizeof(char));
    int i;

    sprintf(temp, "%d", year); 
    
    if (leap(year))
    {
        date[1]='2';
    }
    
    for(i=0;i<4;i++)
        date[i+6]=temp[i];
    
    strcpy(res,date);

    return res;
}

int main()
{
    int year;
    scanf("%d",&year);

    char* result = dayOfProgrammer(year);

    printf("%s\n", result);

    return 0;
}