#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main() {
    struct {
        double G[250];
        double F[250];
        double Y[250];
    } fun;

    int i = 0;
    double x, a, x2, memory[1], shag;
    char start[100];

    printf("Введите x меньше x2:");
    scanf("%s", start);
    x = atof(start);
    getchar();
    memset(start, 0, 100);

    printf("Введите x2: ");
    scanf("%s", start);
    x2 = atof(start);
    getchar();
    memset(start, 0, 100);

    printf("Введите a: ");
    scanf("%s", start);
    a = atof(start);
    getchar();
    memset(start, 0, 100);

    printf("Введите шаг: ");
    scanf("%s", start);
    shag = atof(start);
    memset(start, 0, 100);

    memory[0] = x;
    memory[1] = x2;

    while (x < x2) {
        if (fabs(25 * a * a + 30 * a * x + 9 * x * x) >= 0.00001) {
            fun.G[i] = (9 * (7 * a * a - 19 * a * x + 10 * x * x)) / (25 * a * a + 30 * a * x + 9 * x * x);
            printf("G = %f\n", fun.G[i]);
        }
        i++;
        if (i > 50) {
            printf("Массив полон.");
            break;
        }
        x = x + shag;
        if (x >= x2) {
            break;
        }
    }
    printf("G:============================\n");
    i = 0;
    x = memory[0];
    x2 = memory[1];


    while (x < x2) {
        if ((cos(9 * a * a - 13 * a * x - 10 * x * x) >= -1) && (cos(9 * a * a - 13 * a * x - 10 * x * x) <= 1)){
            fun.F[i] = cos(9 * a * a - 13 * a * x - 10 * x * x);
            printf("F = %f\n", fun.F[i]);
        }
        i++;
        if (i > 50) {
            printf("Массив полон.");
            break;
        }
        x = x + shag;
        if (x >= x2) {
            break;
        }
    }
    printf("F:============================\n");
    i = 0;
    x = memory[0];
    x2 = memory[1];

    while (x < x2) {
        if ("x > 1, x1 < 10\n"){
            fun.Y[i] = (log(-80 * a * a - 46 * a * x + 21 * x * x + 1)) / (log(10));
            printf("Y = %f\n", fun.Y[i]);
        }
        i++;
        if (i > 50) {
            printf("Массив полон.");
            break;
        }
        x = x + shag;
        if (x >= x2) {
            break;
        }
    }
    printf("=================================\n");
    return 0;
}
