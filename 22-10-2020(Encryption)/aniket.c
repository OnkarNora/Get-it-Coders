/*Aniket Suryawanshi
https://www.hackerrank.com/challenges/encryption/problem*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char str[100];
    scanf("%s",str);
    int i,j,len,l;
    len=strlen(str);
    l=ceil(sqrt(len));

    for(i=0;i<l;i++)
    {
        for(j=i;j<len;j+=l)
        {
            printf("%c",str[j]);
        }
        printf(" ");
    }
    return 0;
}
/*haveaniceday
hae and via ecy*/

