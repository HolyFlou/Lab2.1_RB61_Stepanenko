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

    system("cls");
    printf("x = %lf", x);
    printf("\ny = %lf", y);

    return 0;
}