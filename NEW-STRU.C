#include<stdio.h>
#include<conio.h>
#define SIZE 3
struct student{
	int sid;
	char name[30];
	float fees,physics,chemistry,maths,total,percentage;
	char grade;

};
struct student s[SIZE];

void create();
void display();
int search();
void update();
//void del();
void calculategrade();
void main(){
	int choice,id;
	while(1){
	clrscr();
	printf("\n1-----create");
	printf("\n2-----display");
	printf("\n3-----update");
	printf("\n4-----search");
	printf("\n5-----del");
	printf("\n6-----exit");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	switch(choice){

	case 1:create();
	       break;
	case 2:display();
	       break;
	case 3:update();
	       break;
	case 4:id=search();
		if(id!=-1){
			printf("\nrecord found at %d",id);
			}
			else
			{
			printf("\nrecord not found");
			}
		break;
      //case 5:del();
     //        break;
	case 6:exit(0);

	}//end of choice
	getch();
	}//end of while
}
void create(){
	float temp;
	int i;
	printf("\nenter the sid ");
	scanf("%d",&s[i].sid);
	printf("\nenter the name ");
	scanf("%s",&s[i].name);
	printf("\nenter the fees ");
	scanf("%f",&temp);
	s[i].fees=temp;
	printf("\nenter the physics marks ");
	scanf("%f",&temp);
	s[i].physics=temp;
	printf("\nenter the chemistry marks ");
	scanf("%f",&temp);
	s[i].chemistry=temp;
	printf("\nenter the maths marks ");
	scanf("%f",&temp);
	s[i].maths=temp;
	calculategrade(i);


}
void calculategrade(int i){
	s[i].total=s[i].physics+s[i].chemistry+s[i].maths;
	s[i].percentage=s[i].total/3;
	if(s[i].percentage>=90){
		s[i].grade='A';
		}
		else if(s[i].percentage>=80)
		{
		s[i].grade='B';
		}
		else
		{
		s[i].grade='C';
		}

}
void display(){
	int i;

	printf("\nSID\tname\tfees\tphysics\tchemistry\tmaths\total\percentage\tgrade");
	for(i=1;i<SIZE;i++){
	printf("\n%d\t%s\t%f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c\n",s[i].sid,s[i].name,s[i].fees,s[i].physics,s[i].chemistry,s[i].maths,s[i].total,s[i].percentage,s[i].grade);
	}
	}
int search(){
	int id,i;
	printf("\nenter the sid which you want to search");
	scanf("%d",&id);
	for(i=1;i<SIZE;i++){
		if(s[i].sid==id){
			return i;
			}
		}
		return -1;
	}
void update(){
	int id=-1;
	int choice;
	float marks;
	id= search();
	if(id==-1){
		printf("record not found");
		}
		else
		{
		printf("\n1----update physics marks");
		printf("\n2----update chemistry marks");
		printf("\n3----update maths marks");
		printf("\nenter the choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:printf("\nenter the new marks");
			       scanf("%f",&marks);
			       if(marks>100)
			       {
			       printf("\nyou are not allowed to exceed 100");
			       }
			       else
			       {
			       s[id].physics=marks;
			       calculategrade(id);
			       }
			       break;
			case 2:printf("\nenter the new marks");
			       scanf("%f",&marks);
			       if(marks>100)
			       {
			       printf("\nyou are not allowed to exceed 100");
			       }
			       else
			       {
			       s[id].chemistry=marks;
			       calculategrade(id);
			       }
			       break;
		       case 3:printf("\nenter the new marks");
			       scanf("%f",&marks);
			       if(marks>100)
			       {
			       printf("\nyou are not allowed to exceed 100");
			       }
			       else
			       {
			       s[id].maths=marks;
			       calculategrade(id);
			       }
			       break;

			       }//end of switch
		       }//end of else
}
