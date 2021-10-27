#include <stdio.h>
#include <math.h>
#include <iostream>
int main(void) {
    setlocale(LC_ALL, "RUS");
    int n;
    double x, y;
    short h;

    for (n = 0; n < 5; n++) {

        printf("|   x   |      y     |\n");
        printf("|-------|------------|\n");
        /* внутренний цикл для одного периода */
        for (x = 0; x < 4; x += 0.25) {
            /* 1-й отрезок */
            if (x < 2) y = sqrt(4 - (x - 2) * (x - 2));
            /* 2-й отрезок */
            else if (x < 4) y = -x + 4;

            printf("| %5.2lf | %10.7lf |", x + n * 4, y);
            /* определение позиции точки */
            h = (y + 1) * 10;
            if (y - 1 - h * 10 > 0.5) h++;
            /* вывод точки графика */
            for (; h > 0; h--) printf(" ");
            printf("*\n");

            printf("Нажмите клавишу Enter...");
            getchar();

            return 0;
        }
    }
}