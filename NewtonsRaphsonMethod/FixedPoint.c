#include <stdio.h>
#include <conio.h>
#include <math.h>
#define E 0.0001

float f(float x)
{
    return (cos(x) - 3 * x + 1);
}
float g(float x)
{
    return ((cos(x) + 1) / 3);
}

int main()
{
    float x0 = 0, x1 = 0;
    int i = 1;
    printf("The initial value is:");
    scanf("%f", &x0);

    do
    {
        x1 = g(x0);
        printf("\n i=%d\t x0=%f\t x1=%f\t f(x1)=%f", i, x0, x1, f(x1));
        x0 = x1;
        i++;

    } while ((fabs(f(x1)) > E));
    printf("\nThe root is x1=%f", x1);
    getch();
    return 0;
}