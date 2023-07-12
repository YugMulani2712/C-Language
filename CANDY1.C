



/*
      AUTHOR:-chauhan rushil
      DOC:-24th may
      OBJECTIVE:-make a candy game
*/


#include<stdio.h>;
#include<conio.h>;
void main(){
       int candyX=40,candyY=2,boxX=40,boxY=23,score=0,lifeline=3,d=0;
       char ch;
     textbackground(BLACK);
     start:
      clrscr();
      gotoxy(60,5);
      textcolor(RED);
      cprintf("score=%d",score);
      gotoxy(60,6);
      textcolor(RED);
      cprintf("lifeline=%d",lifeline);
      gotoxy(candyX,candyY);
      textcolor(YELLOW);
      cprintf("0");
      gotoxy(boxX,boxY);
      textcolor(YELLOW);
      cprintf("#");
      gotoxy(boxX+7,boxY);
      textcolor(YELLOW);
      cprintf("#");

      gotoxy(boxX,boxY+1);
      textcolor(YELLOW);
      cprintf("######## ");
       if(kbhit()){
	  ch=getch();
	  switch (ch){

	    case'a':if(boxX>1){
			       boxX--;
			       }
		    break;
	    case'A':if(boxX>1){
			       boxX--;
			       }
		    break;
	    case'd':if(boxX<73){
				boxX++;
				}
		    break;
	    case'D':if(boxX<73){
				 boxX++;
				 }
		    break;
	     case'x':exit(0);
	     }


	     }//end of if
	 candyY++;
	 if (candyY==22){
			 d=candyX-boxX;
	 if (d>=1  && d<=6){
	 score++;
	 sound(500);
	 delay(300);
	 nosound();
	 }else{
	       lifeline--;
	       if (lifeline==0){
			    clrscr();
			    gotoxy(40,13);
			    textcolor(RED);
			    cprintf("GAME IS OVER");
			    sound(500);
			    delay(1000);
			    nosound();
			    getch();
			    exit(0);
			  }

			  }
	candyY=2;
	candyX=rand()%78+1;
	}
	delay(250);
	goto start;




	}
