#include<stdio.h>
#include<conio.h>
void main (void)
{
clrscr();
int i;
printf("\n\n");
for(i=32;i<=127;i++)
printf("%4d = %c", i, i);
getch();
}
