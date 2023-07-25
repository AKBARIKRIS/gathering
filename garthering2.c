#include<stdio.h>

sum(int b[],int n)
{
	int i,add=0;
	for(i=0;i<n;i++)
	{
		add=add+b[i];
	}
	printf("sum of array =%d\n",add);
}

main()
{
	int a[100],n;
	printf("enter array size =");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	sum(a,n);
	
}