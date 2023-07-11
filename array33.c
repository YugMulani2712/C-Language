#include<stdio.h>

int main()
{
	int array[10], num, odd_sum = 0, even_sum = 0;

printf("enter the value of num\n");
scanf("%d", &num);
	for (int i = 0; i <= 10; i++)
{
	if(i % 2 == 0)
	even_sum = even_sum + i;
else
	odd_sum = odd_sum + i;
}
	printf("sum of all odd numbers = %d\n", odd_sum);
	printf("sum of all even numbers = %d\n", even_sum);
}