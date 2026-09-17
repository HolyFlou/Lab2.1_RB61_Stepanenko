#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, y;
    
    printf("Enter x: ");
    scanf("%lf", &x);

    if (-5 <= x && x < -2)
    {
        y = exp(x - 1);
    }
    else if (2 <= x && x < 5)
    {
        y = exp(x + 1);
    }
    else if (10 <= x && x < 15)
    {
        y = -log10(x) + (x / (cos(2 * x) + 1));
    }
    else
    {
        y = 5;
    }

    system("cls");
    printf("x = %lf", x);
    printf("\ny = %lf", y);

    return 0;
}