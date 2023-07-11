/*                              AUTHOR     :- Yug Mulani
				DOC        :- 07/07/2023
				OBJECTIVE  :- Student Structure
*/
#include<stdio.h>
#include<conio.h>

void record();
void display();
void search();
//void del();
//void update();

struct student
{
	int roll;
	int physics,chemistry,maths,english,computer,total,percentage;
	char name[30];
}s[5];

struct student temp;

void main()
{
	int ch;
	clrscr();

	while(1)
	{
	clrscr();
	printf("\nwelcome to student management system: ");
	printf("\n");
	printf("\n1.....insert student record: ");
	printf("\n2.....display student record: ");
	printf("\n3.....search student record: ");
     //	printf("\n4.....delete student record: ");
     //	printf("\n5.....update student record: ");
	printf("\n6.....exit: ");

	printf("\nenter the choice: ");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:clrscr();
		       record();
		       break;
		case 2:clrscr();
		       display();
		       break;
		case 3:clrscr();
		       search();
		       break;
/*		case 4:clrscr();
		       del();
		       break;
		case 5:clrscr();
		       record();
		       break;
*/
		case 6:exit();
		}//end of switch
		getch();
		}//end of while 1
      }//void main


void record(){
	FILE *fp;
	int i;
	fp = fopen("projectexam.txt","w");

	if(fp==NULL)
	{
		printf("\nerror to opening the programme: ");
	}//end of if

	printf("\nenter the data: ");

	for(i=1;i<=5;i++)
	{
	printf("\nenter the roll no: ");
	scanf("%d",&s[i].roll);

	printf("\nenter student name: ");
	scanf("%s",&s[i].name);

	printf("\nmarks ");
	printf("\n");
	printf("\nphysics: ");
	scanf("%d",&s[i].physics);

	printf("\nchemistry: ");
	scanf("%d",&s[i].chemistry);

	printf("\nmaths ");
	scanf("%d",&s[i].maths);

	printf("\nenglish: ");
	scanf("%d",&s[i].english);

	printf("\ncomputer: ");
	scanf("%d",&s[i].computer);

	s[i].total=s[i].physics+s[i].chemistry+s[i].maths+s[i].english+s[i].computer;
	s[i].percentage=s[i].total/5;

	fwrite(&s[i],sizeof(s[i]),1,fp);
	}//end of for
	fclose(fp);
}//end of record

void display()
{
	FILE *fp;
	int i;
	fp = fopen("projectexam.txt","r");

	if(fp==NULL)
	{
	printf("\nerror with file opening: ");
	return;
	}

	printf("\nstudent record: ");
	printf("\nrecord from the file: ");
	printf("\nroll no name physics chemistry maths english computer total percentage:");

	for(i=1;i<=5;i++)
	{
	fread(&temp,sizeof(temp),1,fp);
	printf("\n %d   %s   %d    %d   %d   %d    %d   %d   %d",temp.roll,temp.name,temp.physics,temp.chemistry,temp.maths,temp.english,temp.computer,temp.total,temp.percentage);
	}//end of for
	fclose(fp);
	}//end of void
void search()
{
	int ro,flag=0,i;
	FILE *fp;
	fp = fopen("projectexam.txt","r");

	if(fp==NULL)
	{
	printf("\nerror of file opening:");
	return;
	}

	printf("\nenter the student roll no you want to search:");
	scanf("%d",&ro);

	for(i=1;i<=5;i++)
	{
	fread(&temp,sizeof(temp),1,fp);
	if(ro==s[i].roll)
	{
	flag=1;
	printf("\n record find at %d place",i);
	}//end of if
	}
	if(flag==0)
	{
	printf("\nrecord not found:");
	}//end of if

	fclose(fp);

}//end of void search

/*
void update()
{
int ro,flag=0;
int i,ch1;
FILE *fp;

fp = fopen("projectexam.txt","r");

if(fp==NULL)
{
printf("\n error of file opening");
return;
}

printf("\nenter the student roll no you want to update:);
scanf("%d",&ro);

for(i=1;i<=5;i++)
{
fread(&temp,size(temp),1,fp);
   if(ro==s[i].roll)
   {
   flag=1;
   printf("\nwhich marks do you want to update:");
   printf("\n1.....physics:");
   printf("\n2.....chemistery:");
   printf("\n3.....maths:");
   printf("\n4.....english:");
   printf("\n5.....computer:");

   printf("\nenter your choice:");
   scanf("%d",&ch1);

   switch(ch1)
   {
	   case 1:printf("\nphysics:");
		  scanf("%d",&s[i].physics);
		  fwrite(&s[i],sizeof(s[i]),1,fp);
		  break;

	   case 2:printf("\nchemistry:");
		  scanf("%d",&s[i].chemistry);
		  fwrite(&s[i],sizeof(s[i]),1,fp);
		  break;

	   case 3:printf("\nmaths:");
		  scanf("%d",&s[i].maths);
		  fwrite(&s[i],sizeof(s[i]),1,fp);
		  break;

	   case 4:printf("\nenglish:");
		  scanf("%d",&s[i].english);
		  fwrite(&s[i],sizeof(s[i]),1,fp);
		  break;

	   case 5:printf("\ncomputer:");
		  scanf("%d",&s[i].computer);
		  fwrite(&s[i],sizeof(s[i]),1,fp);
		  break;
	   }//end of switch

	   }//end of if
	   }

	   if(flag==0)
	   {
	   printf("\nrecord not found:");
	   }//end of if
	   fclose(fp);
	   }//end of void update
*/




























