#include<stdio.h>
#include<conio.h>
void main (void)
{
clrscr();
int i, num;
int flag=1;

printf("Enter a number: ");
scanf("%d", &num);

for(i=2; i<num; i++)
if((num%i)==0)
flag = 0;

if (flag==1)
printf("\n %d is a prime number", num);
else
printf("\n %d is not a prime number", num);
getch();
}