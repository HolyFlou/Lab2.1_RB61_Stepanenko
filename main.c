#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, y;
// Вводимо x
    printf("Enter x: ");
    scanf("%lf", &x);

// Перевіряємо умови
    // Перша умова -5 <= x < -2
    if (-5 <= x && x < -2)
    {
        y = exp(x - 1);
    } 
    // Друга умова 2 <= x < 5
    else if (2 <= x && x < 5)
    {
        y = exp(x + 1);
    }
    // Третя умова 10 <= x < 15
    else if (10 <= x && x < 15)
    {
        y = -log10(x) + (x / (cos(2 * x) + 1));
    }
    // Четверта умова для усіх інших значень x
    else
    {
        y = 5;
    }

// Виводимо кінцеву інформацію в термінал
    system("cls");
    printf("x = %lf", x);
    printf("\ny = %lf", y);

    return 0;
}