//Anuj's Code
//16/10/2020
#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,count1=0,count2=0,i;
  scanf("%d",&n);
  int c[n];
  for(i=0;i<n;i++){
    scanf("%d",&c[i]);
  }
  for(i=0;i<n;i++){
    if(c[i]==0){
    if((c[i+2]==c[i])){
        count1++;
        i++;
    }
    else if ((c[i+1]==c[i])){
        count1++;
    }
  }
  }
  printf("%d",(count1+count2));
    return 0;
}
