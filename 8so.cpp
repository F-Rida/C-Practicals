#include<stdio.h>
#include<conio.h>
void main (void)
{
clrscr();
int n1, n2, n3;
printf("\n Enter first number: ");
scanf("%d", &n1);
printf("\n Enter second number: ");
scanf("%d", &n2);
printf("\n Enter third number: ");
scanf("%d", &n3);

if(n1>n2 && n1>n3)
printf("\n %d is the greatest number", n1);
else if(n2>n1 && n2>n3)
printf("\n %d is the greatest number", n2);
else if(n3>n2 && n3>n1)
printf("\n %d is the greatest number", n3);

getch();
}