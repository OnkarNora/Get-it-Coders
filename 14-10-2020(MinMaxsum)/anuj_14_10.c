//Anuj's Code
//14/10/2020
#include <stdio.h>
#include <stdlib.h>

int main()
{ int sum=0,max=0,min=0,a[5],i;
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
max=min=a[0];
for(i=0;i<5;i++){
    if(a[i]<min){
        min = a[i];
    }
    if(a[i]>max){
        max = a[i];
    }
    sum = sum+a[i];
}
printf("MIN:%d,MAX:%d",sum-max,sum-min);
    return 0;
}
/*
input
1 2 3 4 5
output
MIN:10,MAX:14
*/ 