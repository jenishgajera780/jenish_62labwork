// Q write a program to print even numbers from 1 to n using a do-while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int s;
clrscr();
int j = 1;
printf("ENTER THE ANY NUMBER : ");
scanf("%d",&s);

do{
 if (s % 2 == 0)
  {
  printf("%d\n",s);
  }
  s++;
}
while(s<=j);

getch();
}
