#include<stdio.h>
#include<conio.h>
char letter( char ch);
void main (void)
{
clrscr();
int n;
char ch;

printf("\n Enter an Alphabet:");
scanf("%c", &ch);
letter(ch);
getch();
}

//function body

char letter (char ch)
{
n=ch;
if (n>=65 && n<=90)
{
n=n+32;
printf ("\n The lowercase is %c", n);
}

else if(n>=97 && n<=122)
{
n=n-32;
printf("\n The uppercase is %c", n);
}

else
printf("\n Invalid Input");


}