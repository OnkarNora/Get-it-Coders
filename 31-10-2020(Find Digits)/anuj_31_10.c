// find digits
//Anuj's code.
#include <stdio.h>
#include <stdlib.h>

int main()
{ int t,n,i;
int a,count=0,temp;
scanf("%d",&t);
for(i=0;i<t;i++){
    count =0;
    scanf("%d",&n);
    a=n;
    while(a!=0){
        temp=a % 10;
        if(temp==0){
            a = a / 10;
             continue;
        }
        if(n % temp==0){
            count++;
        }
         a=a/10;
    }
    printf("%d\n",count);
}
return 0;
}
