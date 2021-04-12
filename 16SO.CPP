#include<stdio.h>
#include<conio.h>
void sum1 (int num1, int num2);
void main (void) 
{
clrscr();
int n1, n2;
printf("\nEnter first number: ");
scanf("%d", &n1);
printf("\nEnter second number: ");
scanf("%d", &n2);
sum1 (n1,n2);
getch();
}

void sum1(int num1, int num2)
{
int sum;
sum = num1 + num2;
printf("\n\n\t %d + %d = %d", num1, num2, sum);
}