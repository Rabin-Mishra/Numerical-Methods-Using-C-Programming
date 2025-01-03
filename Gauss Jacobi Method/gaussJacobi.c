#include <stdio.h>
#include <conio.h>
#include <math.h>

#define f1(x, y, z) (15 - y - z) / 10
#define f2(x, y, z) (24 - x - z) / 10
#define f3(x, y, z) (33 - x - y) / 10

int main()
{
    float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, e1, e2, e3, e;
    int i = 1;

    printf("Enter the error: ");
    scanf("%f", &e);

    printf("\n\tIterations\t x\t\t y\t\t z\n");

    do
    {
        x1 = f1(x0, y0, z0);
        y1 = f2(x0, y0, z0);
        z1 = f3(x0, y0, z0);

        printf("\t %d\t\t %f\t %f\t %f\n", i, x1, y1, z1);

        e1 = fabs(x0 - x1);
        e2 = fabs(y0 - y1);
        e3 = fabs(z0 - z1);

        i++;

        x0 = x1;
        y0 = y1;
        z0 = z1;

    } while (e1 > e || e2 > e || e3 > e);

    printf("\nThe solution is: x=%f, y=%f, z=%f\n", x1, y1, z1);

    getch();
    return 0;
}
