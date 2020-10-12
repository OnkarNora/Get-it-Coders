//onkar nora
//https://www.hackerrank.com/challenges/game-of-stones-1/problem
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Complete the gameOfStones function below.


// int recurse(int n,int i)
// {

//     if (n==2||n==3||n==5||n==4||n==6)
//         return i;
//     else if (n==1||n==7||n==8)
//         return (!i);
//     if (i==1)
//         return (recurse(n-2,(!i))||recurse(n-3,(!i))||recurse(n-5,(!i)));
//     else 
//         return (recurse(n-2,(!i))&&recurse(n-3,(!i))&&recurse(n-5,(!i)));
// }

char* gameOfStones(int n) {

    return (n % 7 == 0 || n % 7 == 1) ? "Second":"First" ;
}

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%s\n",gameOfStones(n));
    }

    return 0;
}


