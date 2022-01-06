#include<stdio.h>
int main(){
	int num,i,f=1,sum=0;
	scanf("%d",&num);
	if (num>=0 && num<10){
		for(i=1;i<=num;i++)
		{
			f=f*i;
			sum=sum+f;
		}
		printf("%d",sum);
	}
	else if(num>=10){
		printf("Too big a number");
	}
	else
	{
		printf("Negative Number");
	}
}
