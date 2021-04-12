#include<stdio.h>
#include<conio.h>
void main (void)
{
clrscr();
int n;
float fah, cel, kel;
printf("\n\n\n");
printf("\t\t\tMENU FOR TEMPERATURE SCALE CONVERSION");
printf("\n\t\t\t_____________________________________\n\n");
printf("1. From Celsius to Fahrenheit Scale \n");
printf("2. From Fahrenheit to Celsius Scale \n");
printf("3. From Celsius to Kelvin Scale \n");
printf("4. From Fahrenheit to Kelvin Scale \n");
printf("\nEnter the MENU option: ");
scanf("%d", &n);

switch (n)
{
case 1:
    printf("\nEnter temperature in Celsius: ");
    scanf("%f", &cel);
    fah= 32.0 + (9.0/5.0) *cel;
    printf("\nThe Temperature in Fahrenheit is = %.2f", fah);
    break;
case 2:
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fah);
    cel= 5.0/9.0 * (f-32.0);
    printf("\nThe Temperature in Celsius is = %.2f", cel);
    break;
case 3:
    printf("\nEnter temperature in Celsius: ");
    scanf("%f", &cel);
    kel = c+273.15;
    printf("\nThe Temperature in Kelvin is = %.2f", kel);
    break;
case 4:
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fah);
    kel = (5.0/9.0*(fah-32.0)) + 273.15;
    printf("\nThe Temperature in Kelvin is = %2f", kel);
    break;
default:
    printf("\nInvalid Menu Option\n\n");
    
}
getch();
}