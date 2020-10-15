// Time Conversion
// Onkar Nora
// https://www.hackerrank.com/challenges/time-conversion/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* timeConversion(char* s) {
    char a;
    a = s[8];
    char *res = (char*)malloc (20*sizeof (char));
    int i;
    
    if (a=='A')
    {
        if (s[0]=='1'&&s[1]=='2')
        {
            res[0]='0';
            res[1]='0';
            for(i=2;s[i]!='A';i++)
                res[i]=s[i];
            res[i]='\0';
        }
        else
        {
            for(i=0;s[i]!='A';i++)
                res[i]=s[i];
            res[i]='\0';
        }
        
    }
    else 
    {
        if (s[0]=='1'&&s[1]=='1')
        {
            res[0]='2';
            res[1]='3';
            for(i=2;s[i]!='P';i++)
                res[i]=s[i];
            res[i]='\0';
        }
        else if (s[0]=='1'&&s[1]=='2')
        {
            for(i=0;s[i]!='P';i++)
                res[i]=s[i];
            res[i]='\0';
        }
        else 
        {
            if (s[1]>='8'||s[1]=='0')
                res[0]='2';
            else 
                res[0]='1';
            res[1] = s[1]+2;
            for(i=2;s[i]!='P';i++)
                res[i]=s[i];
            res[i]='\0';

        }  
    }

    return res;

}

int main()
{
    char s[20],*res;
    scanf("%s",s);

    res = timeConversion(s);

    printf("%s",res);
    
    return 0;
}


