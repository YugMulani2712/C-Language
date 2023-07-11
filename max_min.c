#include<stdio.h>
int a[100], size,max,min,i;

int minmax()
{
    
     max=a[0];
    min=a[0];
    for(i=0;i<size;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }

        
    }
}

int main()
{
   


    printf("enter your size array");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    minmax(a);
    
    printf("maximum value: %d \n",max);
    printf("minimum value : %d\n",min);
    return 0;
}