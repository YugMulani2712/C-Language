#include<stdio.h>
int main()
{
	int a[2][2],sum=0;
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{

			printf("enter value a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);

		}

	

	}
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{

			printf("%d ",a[i][j]);
			sum=sum+a[i][j];

		}
		printf("\n");
			
			
	}
	printf("sum=%d",sum);
	return 0;
}