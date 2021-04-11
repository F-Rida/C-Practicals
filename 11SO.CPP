#include<stdio.h>
#include<conio.h>
void main (void)
{
clrscr();
int n, i;
double fac=1;
printf("\n Enter number to generate its factorial: ");
scanf("%d", &n);
if(n>0)
{
for(i=n; i>=1; i--)
fac=fac*i;
printf("\n\n Factorial of %d is %.lf", n, fac);

}
else
printf("Invalid Input");
getch();
}