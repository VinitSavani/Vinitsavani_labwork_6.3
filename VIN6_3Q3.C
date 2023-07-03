/* write a program to print the multipluication table of the number N using any type of loop.
output
Enter any positiv number:1
1*1 =1
1*2 =2
1*3 =3
1*4 =4
1*5 =5
1*6 =6
1*7 =7
1*8 =8
1*9 =9
1*10=10
*/
#include<stdio.h>
#include<conio.h>

void main(){
int a,b;

clrscr();

printf("Enter any positiv number:");
scanf("%d",&b);

for(a=1;a<=10;a++){
   printf("%d * %d = %d\n",b,a,(b*a));
}

getch();
}