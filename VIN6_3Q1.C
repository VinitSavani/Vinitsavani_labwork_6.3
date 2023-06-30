// 6.3-Q1 write a program to print the sum of all numbers from 1 to N using for loop.

#include<stdio.h>
#include<conio.h>

void main(){
int n,c,s=0;
clrscr();
printf("Enter any positiv number:");
scanf("%d",&n);
for(c=1;c<=n;c++){
 s = s + c;
}
printf("the sum of all number is %d",s);
getch();
}