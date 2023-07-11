#include<stdio.h>
#include<conio.h>
#define SIZE 2
struct Students{
	char name[50],address[150];
	int std;

}s1[3];

void main(){
	       int  i;
	       char a[500];
	       FILE *file;
	       clrscr();
	       file=fopen("student.txt","w");
	       if(file==NULL)
	       {
		printf("\n error in dispaying output");
		return;

	       }// end of if


	       for(i=0;i<3;i++)
	       {
			printf("\n Enter the details of students[%d]: ",i+1);
			printf("\nStudents name: ");
			scanf("%s",s1[i].name);
			printf("\nStudents std: ");
			scanf("%d",&s1[i].std);
			printf("\nStudents address: ");
			scanf("%s",s1[i].address);
			printf("\n");

	       }// end of for1

	       for(i=0;i<3;i++)
	       {
		fprintf(file,"\nStudents %d details: ",i+1);
		fprintf(file,"\nStudents Name: %s",s1[i].name);
		fprintf(file,"\nStudents std: %d",s1[i].std);
		fprintf(file,"\nStudents address: %s",s1[i].address);
		fprintf(file,"\n\n");

	       }// end of for2

	       fclose(file);
	       file=fopen("student.txt","r");

	       printf("\n\nHere are the input....................... \n ");
	       if(file==NULL)
	       {
		printf("\n error shown");
		return;
	       }
	       while(fgets(a,sizeof(a),file)!=NULL)
	       {
		printf("%s",a);
		}
		fclose(file);
		getch();

}// end of main