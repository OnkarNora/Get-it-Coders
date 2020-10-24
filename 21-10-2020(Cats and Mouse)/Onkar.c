// Cats and Mouses
// https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
// Onkar Nora

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mod(int n)
{
    if (n<0)
        return -n;
    return n;
}
char* catAndMouse(int x, int y, int z) {

    if (mod(z-y)<mod(z-x))
        return "Cat B";
    else if (mod(z-x)<mod(z-y))
        return "Cat A";
    else 
        return "Mouse C";
    
}

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        printf("%s\n",catAndMouse(x,y,z));
    }

    return 0;
}
