#include<stdio.h>
#include<conio.h>
void main (void)
{
clrscr();
int a, b;

for (b=1; b<12; b++)
{
for(a=1;a<12;a++)
if((a+b)%2==0)
printf("\xDB");
else
printf(" ");
printf("\n");
}
getch();
}