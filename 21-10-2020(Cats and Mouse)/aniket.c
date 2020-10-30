/*Aniket Suryawanshi
Cats and a Mouse
https://www.hackerrank.com/challenges/cats-and-a-mouse/problem*/
#include <stdio.h>
#include <stdlib.h>
char* CatMouse(int a,int b,int c)
{
    int p,q;
    p=abs(a-c);
    q=abs(b-c);
    if(p==q)
        return "Mouse C";
    if(p>q)
        return "Cat B";
    else
        return "Cat A";
}
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    while(n--)
    {
       scanf("%d%d%d",&a,&b,&c);
       printf("%s\n",CatMouse(a,b,c));
    }
    return 0;
}
/*2
1 2 3
Cat B
1 3 2
Mouse C*/
