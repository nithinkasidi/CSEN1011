#include <stdio.h>

int main()
{
	int s,i,n,n1;
	printf("enter the number : ");
	scanf("%d",&n);
	s=0;
	n1=n;
	for(i=1;i<n;i++)
	{
		if((n%i)==0)
		s=s+i;
		
	}
	if(n1==s)
	{
	
	printf("the number is perfect");
} 
else
{
	printf("the number is  not perfect");
}
}