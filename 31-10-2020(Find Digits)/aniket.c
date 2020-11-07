#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,j,n,lastdigit,p;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        p=n;
        int c=0;
        for(int i=0;p!=0;i++)
        {

            if((p%10)!=0)
            {
               lastdigit=p%10;
               if(n%lastdigit==0)
               {
                  c++;
               }
            }
            p=p/10;
        }
        printf("%d\n",c);
    }
    return 0;
}
