/* 6.3-Q2 write a program to print factorial of number N using for loop.
output:-
Enter any positiv number:5
Factorial of 5 is:120

*/
#include<stdio.h>
#include<conio.h>

void main(){
int a,b=1,c;

clrscr();

printf("Enter any positiv number:");
scanf("%d",&c);

for(a=1;a<=c;a++){
   b = b * a;
}

printf("Factorial of %d is:%d",c,b);

getch();
}