/*
				    Author     :- Yug Mulani
				    DOC	       :- 14 JUNE 2023
				    OBJECTIVE  :- TO BINARY SEARCH
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main(){
	int a[SIZE];
	int i,index=-1,key;
	clrscr();
	for(i=0;i<SIZE;i++){
		printf("\nenter the element a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\nthe arrays is follows\n");
	for(i=0;i<SIZE;i++){
		printf("%d\t",a[i]);
	}
	printf("\nenter the key value");
	scanf("%d",&key);
	for(i=0;i<SIZE;i++){
		if(key==a[i]){
		index=1;
		break;
		}
	}
	if(index==-1){
		printf("\nsearch unsucessful");
		}
		else
		{
		printf("the key %d is at %d place",key,index+1);
		}
		getch();
		}