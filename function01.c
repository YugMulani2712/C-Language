#include<stdio.h>

void reverse()

{

	char a[30];
	int i,j;

	printf("\nenter the number ");
	scanf("%s",&a);

	for(i=0;a[i]!='\0';i++){
	}
	for(j=i;j>=0;j--)

	{
		printf("%c",a[j]);
	}
}

	
int main()
{
	reverse();
}