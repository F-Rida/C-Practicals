#include<stdio.h>
#include<conio.h>
void main (void)
{
clrscr();
int num1, num2, gcd, lcm, rem, numerator, denominator;  
  
    printf("\nEnter first number: ");  
    scanf("%d", &num1);  
    printf("\nEnter second number: ");  
    scanf("%d", &num2); 
    if(num1 > num2)  
    {  
        numerator   = num1;  
        denominator = num2;  
    }  
    else  
    {  
        numerator   = num2;  
        denominator = num1;  
    }  
  
    rem = numerator % denominator;  
  
    while(rem != 0)  
    {  
        numerator   = denominator;  
        denominator = rem;  
        rem         = numerator % denominator;  
    }  
  
    gcd = denominator;  
    lcm = (num1 * num2) / gcd;  
  
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);  
    printf("LCM of %d and %d is %d\n", num1, num2, lcm); 
getch();
}