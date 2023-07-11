
#include<stdio.h>
#include<conio.h>
void main(){
int i,a,b;
clrscr();
printf("enter first number = ");
scanf("%d",&a);
printf("enter second number = ");
scanf("%d",&b);
for(i=a;i<=b;i++){
textcolor(YELLOW);
cprintf(" %d",i);
sound(200);//hertz
delay(200);
nosound();
}
getch();
}