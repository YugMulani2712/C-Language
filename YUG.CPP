#include<stdio.h>
#include<conio.h>
void main()
{
	char name[30];
	clrscr();
	FILE *fp;
	fp=fopen("yug.txt","w");//w  r  a
	fprintf(fp,"%s","INDIA");
	fclose(fp);
	fp=fopen("yug.txt","r");
	fscanf(fp,"%s",name);
	printf("\nthe string is %s",name);
	fclose(fp);
	getch();
	}