#include<stdio.h>

int main()

{
	char a[30],b[30],i,j=0;

	printf("enter number: ");
	scanf("%s",&a);

	for(i=0;a[i]!='\0';i++);

	a[i]='\0'-1;
	while(i>=0)
	{
		b[i]=a[i];
		i--;
		j++;
	}
		b[i]='\0';
	printf("reverse number :%s\n",b);

	if(a==b)
	{
	printf("number is pelindrome");
	}
	else
	{
	printf("number is not pelindrome");
	}
	return 0;
}