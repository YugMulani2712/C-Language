#include<stdio.h>

int perfect(int n)

{
	int i,sum=0;

	printf("divisors of %d is \n",n);
	
	for(i=1;i<n;i++)
	{
	if(n%i==0)
	{
	printf("%d ",i);
	sum+=i;
	}
	}

	if(sum==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);

	if(perfect(n))
	{
	printf("\n%d is perfect number",n);
	}
	else
	{
		printf("\n%d is not perfect number",n);
	}
	return 0;
}

