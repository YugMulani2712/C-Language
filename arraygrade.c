#include<stdio.h>

int main()
{
	float student[5],marks[3],i,total,percentage;
	for(i=0; i<5; i++)
	{
	printf("student[%.0f]\n",i+1);

	printf("enter the marks of three subjects =\n");
	scanf("%f",&marks[0]);
	scanf("%f",&marks[1]);
	scanf("%f",&marks[2]);

	total=marks[0]+marks[1]+marks[2];
	printf("total =%f\n",total);

	percentage=total*100/300;
	printf("percentage =%f\n",percentage);

	if(percentage>=90 && percentage<100)
	{
		printf("Grade A1");
	}
        
	else if(percentage>=80 && percentage<90)
	{
		printf("Grade A2");
	}

	else if(percentage>=70 && percentage<80)
	{

		printf("Grade B1");
	}

	else if(percentage>=60 && percentage<70)
	{
		printf("Grade B2");
	}
	else if(percentage>=50 && percentage<60)
	{
		printf("Grade C1");
	}
	else if(percentage>=40 && percentage<50)
	{
		printf("Grade C2");
	}
	else if(percentage>=33 && percentage<40)
	{
		printf("Grade D");
	}
	else
	{
		printf("Needs Improvement");
	}
printf("\n\n");
}
}