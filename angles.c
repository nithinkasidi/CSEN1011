#include<stdio.h>
int main()
{
	int a1,a2,a3;
        printf("Enter two angles:\n");
	scanf("%d %d\n",&a1,&a2);
	a3=180-a1-a2;
	printf("%d",a3);
	return 0;
}
