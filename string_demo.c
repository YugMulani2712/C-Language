#include <stdio.h>
int main()
{
char a[] = {'a','b','c','d','e'};
char b[] = "ABCDEFG";
char c[]= {'a','b','c','d','e','\0'};
printf("B: %s\n",b);
printf("C: %s\n",c);
for(int i = 0; i < 5;i++)
{
printf("A: %c\n",a[i]);
}
printf("A: %c\n",a[3]);
return 0;
}