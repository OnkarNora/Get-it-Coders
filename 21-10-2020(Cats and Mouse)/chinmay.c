#include<stdio.h>

void catAndMouse(int x,int y,int z)
{
	int a = abs(z-x), b = abs(z-y);

	if(a>b)
		printf("Cat B\n");
	else if(a<b)
		printf("Cat A\n");
	else
		printf("Mouse C\n");
}

int main()
{
	int n;
    scanf("%d",&n);
    for(int i=0; i<n;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        catAndMouse(x,y,z);    
    }
	return 0;
}