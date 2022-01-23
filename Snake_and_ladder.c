#include<stdio.h>
#include<stdlib.h>
int y,m=0,r,n=0,p;
void dice()
{
 y=rand()%7;
 if (y==0)
 y=y+3;
}
void checkladder()
{
 if(m==5 || m==9 || m==20 || m==25 ||m==36 ||m==41 ||m==69 || m== 64)
 {
 printf(" \ncongrats!! you have got a ladder");
 if(m==5)
 m=m+43;
 else if(m==9)
 m=m+21;
 else if(m==25)
 m=m+33;
 else if(m==36)
 m=m+59;
 else if(m==41)
 m=m+38;
 else if(m==64)
 m=m+35;
 else if(m==69)
 m=m+25;
 }
}
void checkladdercomp()
{
 if(n==5 || n==9 || n==20 || n==25 ||n==36 ||n==41 ||n==69 || n== 64)
 {
 printf(" \n computer has got a ladder");
 if(n==5)
 n=n+43;
 else if(n==9)
 n=n+21;
 else if(n==25)
 n=n+33;
 else if(n==36)
 n=n+59;
 else if(n==41)
 n=n+38;
 else if(n==64)
 n=n+35;
 else if(n==69)
 n=n+25;
 }
}
void checksnake()
{
 if(m==32 || m==42 || m==52 || m==61 || m== 68 || m==82 || m==89 || m==97)
 {
 printf("\n ohh shitt, a snake bits you ");
 if(m==32)
 m=m-24;
 else if(m==42)
 m=m-26;
 else if(m==52)
 m=m-41;
 else if(m==61)
 m=m-58;
 else if(m==68)
 m=m-64;
 else if(m==82)
 m=m-60;
 else if (m==89)
 m=m-39;
 else if(m==97)
 m=m-85;
 }
}
void checksnakecomp()
{
 if(n==32 || n==42 || n==52 || n==61 || n== 68 || n==82 || n==89 || n==97)
 {
 printf("\n here is a snake ");
 if(n==32)
 n=n-24;
 else if(n==42)
 n=n-26;
 else if(n==52)
 n=n-41;
 else if(n==61)
 n=n-58;
 else if(n==68)
 n=n-64;
 else if(n==82)
 n=n-60;
 else if (n==89)
 n=n-39;
 else if(n==97)
 n=n-85;
 }
}
void comp()
{
 if (p==1)
 {
 printf(" Computer's rolling : ");
dice();
printf("\ndice shows the number %d",y);
 n=n+y;
 checkladdercomp();
checksnakecomp();
if(n>100)
 {
 printf("\n no chance to move forward");
 n=n-y;
 }
 if(n==100)
 {
 printf("\n\n computer won the game");
 }
 printf(" \nComputer's current position is %d\n\n",n);
 }
 if (p==2)
 {
 printf("player 2 rolling :\n");
 printf("Enter 0 to roll dice");
scanf("%d",&r);
 if(r==0)
 {
 dice();
printf("\ndice shows the number %d",y);
 n=n+y;
 checkladdercomp();
checksnakecomp();
 if(n>100)
 {
 printf("\n no chance to move forward ");
 n=n-y;
 }
 if(n==100)
 {
 printf (" \n\n hurrah !!!! player2 won the game ");

 }
 }
 printf("\nplayer2 current position is %d\n\n",n);
 }
}

int main()
{
 printf("If you want to play with computer press 1 and if you want to playwith another player press 2 : ");
 scanf("%d",&p);
 while(1)
 {
 printf("Enter 0 to roll dice");
scanf("%d",&r);
 printf(" your rolling :");
if(r==0)
 {
 dice();
printf("\ndice shows the number %d",y);
 m=m+y;
 checkladder();
checksnake();
 if(m>100)
 {
 printf("\n no chance to move forward ");
 m=m-y;
 }
 if(m==100)
 {
 printf (" \n\n hurrah !!!! you won the game ");
 break;
 }
 printf("\nyour current position is %d\n\n",m);

if(100>n>=0)
 {
 comp();
 }
 if(n==100)
 {
 break;
 }
 }
 }
 return 0;
}