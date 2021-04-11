
#include<stdio.h>
#include<conio.h>
void main (void)
{
    clrscr();
    int i, n;
    printf("\n Enter table number: ");
    scanf("%d", &n);
    for ( i = 1; i <= 10; i++)
        printf("\n %d * %d = %d", n, i, n*i);
    getch();
}