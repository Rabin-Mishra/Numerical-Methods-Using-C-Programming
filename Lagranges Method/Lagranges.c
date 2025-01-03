#include <stdio.h>
#include <conio.h>

int main()
{
    // Declaration of variables
    float x1, x[20], y[20], sum = 0, l;
    int i, j, n;

    // User input for the number of data points
    printf("Enter the value of n\n");
    scanf("%d", &n);

    // User input for the value of x1
    printf("Enter the value of x1:\n");
    scanf("%f", &x1);

    // User input for the values of xi and yi
    printf("Enter the value of xi and yi:\n");
    for (i = 0; i < n; i++)
    {
        printf("x[%d]= ", i);
        scanf("%f", &x[i]);

        printf("y[%d]= ", i);
        scanf("%f", &y[i]);
    }

    // Lagrange's interpolation calculation
    for (i = 0; i < n; i++)
    {
        l = 1;
        for (j = 0; j < n; j++)
        {
            // Calculate the Lagrange polynomial for interpolation
            if (j != i)
            {
                l = l * ((x1 - x[j]) / (x[i] - x[j]));
            }
        }
        // Accumulate the interpolated value
        sum = sum + l * y[i];
    }

    // Display the interpolated result
    printf("The given value of x = %f\n", x1);
    printf("The interpolated value of y = %f\n", sum);

    // Wait for a key press before closing the console window (using conio.h)
    getch();
    return 0;
}
