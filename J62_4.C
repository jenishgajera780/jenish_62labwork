// q4 write a program to print the Fibonacci series up to n numbers using for loop.  

#include <stdio.h>
#include <conio.h>
void main()
{

	int r;

	int n;
	

clrscr();
r = 1;


	printf("Enter any number: ");
	scanf("%d",&n);


	printf("Even Numbers from 1 to %d:\n",n);


	while(r<=n)
	{

		if(r%2==0)
			printf("%d ",r);
		

		r++;
	}

	getch();
}
