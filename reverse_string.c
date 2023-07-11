#include<stdio.h>

int main()
{
	char a[50],b[50];
	int i,j=0;

	printf("enter name : ");
	scanf("%s",&a);
	i=0;

	while(a[i]!= '\0');
	{
		i++;
	}

	a[i]='\0'-1;

	while(i>=0)
	{
	b[j]=a[i];
	j++; 
	

	i--; 
	}
	b[j]='\0';
	printf("reverse word : %c",b[j]);
	return 0;
}