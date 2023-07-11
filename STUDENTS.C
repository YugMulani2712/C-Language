/*                                AUTHOTR   :- Yug Mulani
				  OBJECTIVE :- Student Structure File
				  DOC       :- 08/07/2023
*/
#include<stdio.h>
#include<conio.h>

struct student{
		char name[50];
		int std;
		char address[100];
		};                 //End Of Struct Student
void main(){

	int i;
	char a[200];
	FILE *file;
	struct student students[3];
	clrscr();
	file=fopen("students.txt","w");
	if(file==NULL) //if no data is found
	{
		printf("\nError in opening file!");
		return;
	}

	for(i=0;i<3;i++)
	{
	printf("\nEnter the details of student %d",i+1);

	printf("\nName: ");
	scanf("%s",&students[i].name);
	printf("\nStd: ");
	scanf("%d",&students[i].std);
	printf("\naddress: ");
	scanf("%d",&students[i].address);
	printf("\n");
	}

	for(i=1;i<=3;i++)
	{
	fprintf(file,"\nstudent %d details",i);
	fprintf(file,"\nName: %s",students[i].name);
	fprintf(file,"\nStd: %d",students[i].std);
	fprintf(file,"\nAddress: %s",students[i].address);
	fprintf(file,"\n");
	}
	fclose(file);

