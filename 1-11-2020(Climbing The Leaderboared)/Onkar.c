// Climbing The leaderboard
// https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
// Onkar Nora

#include <stdio.h>
#include <stdlib.h>

int* climbingLeaderboard(int ranked_count,int ranked[],int player_count,int player[]) {
    
    int i,j,c=1;
    int ranks[ranked_count];
    ranks[0]=1;
    
    for(i=1;i<ranked_count;i++)
    {
        if (ranked[i]==ranked[i-1])
            ranks[i]=c;
        else
            ranks[i] = ++c; 
    }
    
    j=ranked_count-1;
    int *result = (int *)malloc(player_count*sizeof(int));
    
    for(i=0;i<player_count;i++)
    {
        while(player[i]>ranked[j] && j>0)
            j--;
            
        if (ranked[j]>player[i])
            result[i] = ranks[j]+1;
        else 
            result[i] = ranks[j];
    }
    
    return result;
}

int main()
{
    int ranked_count,player_count;
    int *result;
    
    scanf("%d",&ranked_count);
    int ranked[ranked_count];
    for(int i=0;i<ranked_count;i++)
        scanf("%d",&ranked[i]);
        
    scanf("%d",&player_count);
    int player[player_count];
    for(int i=0;i<player_count;i++)
        scanf("%d",&player[i]);
    
    result = climbingLeaderboard(ranked_count, ranked,player_count,player);
    for(int i=0;i<player_count;i++)
        printf("%d\n",result[i]);
    
    return 0;
    
}