// Jumping on the Clouds
// https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
// Onkar Nora

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int jumpingOnClouds(int c_count, int* c) {
    int i=0,count=0;
    while(i<c_count)
    {
        if (c[i+2]==0 && i+2<c_count)
        {
            i = i+2;
            count++;
        }
        else if (i+1<c_count) 
        {
            i += 1;
            count++;
        }
        else
            i++;
        
    }
    return count;
}

int main()
{
    int c_count;
    scanf("%d",&c_count);
    int c[c_count];

    for (int i=0;i<c_count;i++)
        scanf("%d",&c[i]);   

    printf("%d",jumpingOnClouds(c_count,c)); 
    
    return 0;
    
}


/*Sample Output:
6
0 0 0 0 1 0
3
*/
