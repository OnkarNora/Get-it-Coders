// Find Digits
// https://www.hackerrank.com/challenges/find-digits/problem
// Onkar Nora

#include <stdio.h>

int findDigits(int n) {
    int temp = n;
    int digit,count = 0;
    
    while(temp!=0)
    {
        digit  = temp%10;
        if (digit==0)
        {
            temp /= 10;
            continue;
        }
        if (n%digit==0)
            count++;
        temp /= 10;
    }
    return count;

}

int main()
{
    int tc;
    scanf("%d",&tc);
    
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",findDigits(n));
    }
    
    return 0;
}