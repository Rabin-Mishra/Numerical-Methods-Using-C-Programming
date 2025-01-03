/*
using the concept of secant method to evaluate
f(x)=3*x+sin(x)-exp(x) upto 3 decimal digits
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define E 0.0001

float f(float x)
{
    return (3 * x + sin(x) - exp(x));
}
int main()
{
    float x1 = 0, x2 = 0, x3 = 0;
    int i = 1;
    printf("\nEnter initial guesses for x1 and x2:\n ");
    scanf("%f %f", &x1, &x2);
    do
    {
        x3 = ((x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1)));
        printf("\n i=%d\t x1=%f\t x2=%f\t x3=%f\t f(x3)=%f\t", i, x1, x2, x3, f(x3));
        x1 = x2;
        x2 = x3;
        i++;

    } while (fabs(f(x3)) > E);
    printf("\nRoot of x3=%f", x3);
    getch();
    return 0;
}