#include<stdio.h>
#include<conio.h>
#define SIZE 3
struct employe
{
	int sid,flag;
	char name[30];
	float pf,salary,tax,allow,nextsal;
	char grade;

}s[SIZE];

void create();
void display();
int search();
void update();
void calculateGrade();
//void del();
void main(){
	int choice,id;
	while(1){
	clrscr();
	printf("\n1-----create");
	printf("\n2-----display");
	printf("\n3-----search");
	printf("\n4-----update");
	printf("\n5-----delete");
	printf("\n6-----exit");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	switch(choice){

	case 1:create();
	       break;
	case 2:display();
	       break;
	case 3:id=search();
		if(id!=-1){
			printf("\nrecord found at %d",id);
			}
			else
			{
			printf("\nrecord not found");
			}
		break;
	case 4:update();
	       break;
      //case 5:del();
     //        break;
	case 6:exit(0);

	}//end of switch
	getch();
	}//end of while
}//end of main
void create()
{
	int i;
	float temp;
	for(i=0;i<SIZE;i++)
	{

	printf("\nenter the employe id = ");
	scanf("%d",&s[i].sid);
	printf("\nenter the name of employe =  ");
	scanf("%s",&s[i].name);
	printf("\nenter the pf = ");
	scanf("%f",&temp);
	s[i].pf=temp;
	printf("\nenter the salary = ");
	scanf("%f",&temp);
	s[i].salary=temp;
	printf("\nenter the tax = ");
	scanf("%f",&temp);
	s[i].tax=temp;
	printf("\nenter the allow = ");
	scanf("%f",&temp);
	s[i].allow=temp;
	printf("\nenter the next salary = ");
	scanf("%f",&temp);
	s[i].nextsal=temp;

	calculateGrade();

	s[i].flag=1;

	}

}
void calculateGrade()
{
	int i;

	s[i].nextsal=s[i].salary-s[i].pf-s[i].tax+s[i].allow;

		}


void display()
{
	int i;

	printf("\nsid name pf salary tax allow nextsal\n");
	for(i=0;i<SIZE;i++)
	{
		if(s[i].flag==1){
	printf("\n%d  %s\t%.2f  %.2f  %.2f  %.2f  %.2f ",s[i].sid,s[i].name,s[i].pf,s[i].salary,s[i].tax,s[i].allow,s[i].nextsal);

	}
	}
	}
int search()
{
	int id,i;
	printf("\nenter the sid which you want to search");
	scanf("%d",&id);
	for(i=0;i<SIZE;i++)
	{
		if(s[i].sid==id)
		{
			return i;
		}//end of if

		}//end of for
		return -1;
		}//end of search
void update()
{
	int choice,id;
	float sal;
	id= search();
	if(id==-1){
		printf("record not found");
		}
		else
		{
		printf("\n1----update pf");
		printf("\n2----update salary");
		printf("\n3----update tax");
		printf("\n4----update allow");
		printf("\n5----update nextsal");
		printf("\nenter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\nenter the new pf = ");
			       scanf("%f",&sal);
			       if(sal>1000)
			       {
			       printf("\nyou are not allowed to exceed 1000");
			       }
			       else
			       {
			       s[id].pf=sal;
			       calculateGrade(id);
			       }
			       break;
			case 2:printf("\nenter the new salary = ");
			       scanf("%f",&sal);
			       if(sal>1000)
			       {
			       printf("\nyou are not allowed to exceed 1000");
			       }
			       else
			       {
			       s[id].tax=sal;
			       calculateGrade(id);
			       }
			       break;
		       case 3:printf("\nenter the new allow = ");
			       scanf("%f",&sal);
			       if(sal>1000)
			       {
			       printf("\nyou are not allowed to exceed 1000");
			       }
			       else
			       {
			       s[id].allow=sal;
			       calculateGrade(id);
			       }
			       break;
			case 4:printf("\nenter the new tax = ");
			       scanf("%f",&sal);
			       if(sal>1000)
			       {
			       printf("\nyou are not allowed to exceed 1000");
			       }
			       else
			       {
			       s[id].tax=sal;
			       calculateGrade(id);
			       }
			       break;
			  case 5:printf("\nenter the new allow = ");
			       scanf("%f",&sal);
			       if(sal>1000)
			       {
			       printf("\nyou are not allowed to exceed 1000");
			       }
			       else
			       {
			       s[id].allow=sal;
			       calculateGrade(id);
			       }
			       break;

			       }

			       }

		}