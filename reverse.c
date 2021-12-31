#include<stdio.h>
int main()
{
	int x,y=0,z;
	printf("Enter a number");
	scanf("%d",&x);
	while(x!=0)
	{
		z=x%10;
		y=y*10+z;
		x/=10;
	}
	printf("reversed number:%d",y);
    return 0;
}