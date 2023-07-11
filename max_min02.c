#include<stdio.h>
void maxmin(int a[])
{
    int max,min;
    max = a[0];
    min=a[0];
    for (int i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {

            min=a[i];
        }
    }
    printf("\nmax:%d",max);
    printf("\nmin:%d",min);
}
int main()
{
    int a[10];

    for(int i=0;i<10;i++)
    {
        printf("Enter the value ",i);
        scanf("%d",&a[i]);
    }
    maxmin(a);
    
}