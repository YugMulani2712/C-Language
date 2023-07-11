#include<stdio.h>

int main()

{
	char a[30];
	int i,j,n,k=0;

	printf("enter name:");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++);

	n=i;
	j=n-1;
	for(i=0;i<=n-1;i++)
	{
	if(i%2==0)
	{
	printf("%c",a[k]);
	k++;
	}
	else
	{
	printf("%c",a[j]);
	j--;
	}
	}
 return 0;
}