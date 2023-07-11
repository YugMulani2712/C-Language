#include<stdio.h>

int main()
{
	int a[3][3],b[3][3],c[3][3];

	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
		{
		
			printf("Enter Value a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
			
		
		}
		
	}

	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
		{
		
			printf("%d ",a[i][j]);
			
		
		}
		
		printf("\n");
	}
	

	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
		{
		
			printf("Enter Value b[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
			
		
		}
		
	}

	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
		{
		
			printf("%d ",b[i][j]);
			
		
		}
		
		printf("\n");
	}
	printf("\n");

	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
		{
		
			printf("%d ",a[i][j] + b[i][j]);
			
		
		}
		
		printf("\n");
	}

	
	return 0;
}