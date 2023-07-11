#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k,l;
clrscr();
for(i=1;i<=3;i++){
for(j=1;j<=i;j++){
printf("*");
}

printf("\t");
for(k=1;k<=i;k++){
printf("*");
}
printf("\n\t");
for(l=1;l<=i;l++){
printf("*");
}
printf("\n");
}
getch();
}