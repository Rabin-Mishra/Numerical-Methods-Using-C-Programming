/*
Using the false position method find f(x)=3*x+sin(x)-exp(x)
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

#define E 0.001

float f(float x)
{
    return (3 * x + sin(x) - exp(x));
}
int main()
{
    float a = 0, b = 0, c = 0;
    int i = 1;
    do
    {
        printf("Enter two initial guess points");
        scanf("%f %f", &a, &b);

    } while ((f(a) * f(b)) > 0);

    do
    {
        x = ((a * f(b) - b * f(a)) / (f(b) - f(a)));
        printf("\n i=%d\t a=%f\t b=%f\t x=%f\t f(x)=%f", i, a, b, x, f(x));
        if (f(a) * f(x) < 0)
            b = x;
        else
            a = x;
        i++;

    } while (fabs(f(x)) > E);

    printf("Root is x=%f", x);
    getch();
    return 0;
}
