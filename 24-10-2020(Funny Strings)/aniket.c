/*Aniket Suryawanshi
Funny String
https://www.hackerrank.com/challenges/funny-string/problem*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* Funnystring(char* a)
{
    char b[10001];
    int i,j=0,v1,v2;
    for(i=strlen(a)-1;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    b[j]='\0';
     for(i=0;i<strlen(a)-2;i++)
    {
        v1=abs(a[i]-a[i+1]);

        v2=abs(b[i]-b[i+1]);
        if(v1!=v2)
            return "Not Funny";
    }
     return "Funny";
}

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
   {
    char a[10001];

    scanf("\n%s",a);
    printf("%s\n",Funnystring(a));
   }
   return 0;
}
/*2
acxz
Funny
bcxz
Not Funny*/
