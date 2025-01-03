#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n;
    float x[20], y[20], sumx = 0, sumy = 0;
    float sumxx = 0, sumxy = 0, a, b;

    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("The value of x[%d]= ", i);
        scanf("%f", &x[i]);
        printf("The value of y[%d] =", i);
        scanf("%f", &y[i]);
    }
    for (i = 0; i < n; i++)
    {
        sumx = sumx + x[i];
        sumy = sumy + y[i];

        sumxx = sumxx + x[i] * x[i];
        sumxy = sumxy + x[i] * y[i];
    }

    printf("\ni=%d\t sumx=%f\t sumy=%f\t sumxy=%f\t sumxx=%f\t ", i, sumx, sumy, sumxy, sumxx);

    b = (n * sumxy - sumx * sumy) / (n * sumxx - sumx * sumx);

    a = (sumy - b * sumx) / n;

    printf("The value is y=%fx+%f", a, b);
    getch();
}