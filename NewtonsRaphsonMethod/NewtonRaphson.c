#include <stdio.h>
#include <conio.h>
#include <math.h>
#define E 0.0001

float f(float x)
{
    return (pow(x, 2) + x - 2);
}
float f2(float x)
{
    return (2 * x + 1);
}
int main()
{
    float x0 = 0, x1 = 0;
    int i = 1;
    printf("Enter the value of the initial root\n");
    scanf("%f", &x0);

    do
    {
        x1 = x0 - (f(x0) / f2(x0));
        printf("\n i=%d\t x0=%f\t x1=%f\t f(x1)=%f", i, x0, x1, f(x1));
        x0 = x1;
        i++;
    } while (fabs(f(x1)) > E);
    printf("\nThe root is x1=%f", x1);
    getch();
    return (0);
}