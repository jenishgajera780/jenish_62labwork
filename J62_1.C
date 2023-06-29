// write a program to print 1 to 10 using a do-while loop.

#include<stdio.h>
#include<conio.h>
 int z = 1;

 void main(){
clrscr();
do{
printf("%d\n",z);
 z++;
} while(z<=10);
getch();
}