// Funny Strings
// Onkar Nora
// https://www.hackerrank.com/challenges/funny-string/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* funnyString(char* s) {
    int i,v1,v2,j=0;
    char d[10001];

    for(i=strlen(s)-1;i>=0;i--,j++)
    {
        d[j] = s[i];
    }    
    d[j]='\0';

    // printf("\n|%s|\n",d);

    for(i=0;i<strlen(s)-2;i++)
    {
        v1=abs(s[i]-s[i+1]);
        v2=abs(d[i]-d[i+1]);
        // printf("\nv1=%d,v2=%d\n",v1,v2);
        if(v1!=v2)
            return "Not Funny";
    }
    
    return "Funny";
}

int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        char s[10001];
        scanf("\n%s",s);
        printf("%s\n",funnyString(s));
    }

    return 0;
}