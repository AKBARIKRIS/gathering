#include<stdio.h>
fact(int num)
{
	int factorial=1;
	if(num<=0)
	{
		return 1;
	}
	else
	{
		factorial=num * fact(num - 1);
	}
	return factorial;
}
 int main()
{
	int n;
	printf("ENTER VALUE =");
	scanf("%d",&n);
	printf("FACTORIAL =%d",fact(n));
		
}