#include<stdio.h>
#include<conio.h>
void main (void)
{
clrscr();
int n;
char ch;
printf("\n Enter a Character: ");
scanf("%c", &ch);
n=ch;
if ((n>=65 && n<=90)||( n>=97 && n<=122))
printf("\n %c is an Alphabet", n);
else
printf("\n %c is not an alphabet", n);
getch();
}