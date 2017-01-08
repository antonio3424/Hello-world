#include <stdio.h>
#include <math.h>

int main() {
    char (Function);
    double x, x1, a, G, F, Y, step;
    int k;
    int razn;
    ZANOVO:

    printf("введите нач. x:\n");
    scanf("%lf", &x);

    printf("введите кон. x1:\n");
    scanf("%lf", &x1);

    printf("введите переменную a:\n");
    scanf("%lf", &a);

    printf("введите шаг:\n");
    scanf("%lf", &step);

    printf("введите G, F, Y:\n");
    scanf("%s", &Function);


    switch (Function) {
        case 'G':
            for (x = 1; x < 10; x += step);
            {
                if (-4 * pow(a, 2) + a * x + 5 * pow(x, 2) != 0) {
                    G = (7 * (54 * pow(a, 2) - 33 * a * x + 4 * pow(x, 2))) / (-4 * pow(a, 2) + a * x + 5 * pow(x, 2));
                    printf("G = %lf\n", G);
                } else {
                    printf("не правильная функция\n");
                break;
                }
        }
            printf("посчитайте другую функцию 1, завершить 0\n");
            scanf("%d",&razn);
            if (razn == 1)
                goto ZANOVO;
                break;

        case 'F':
            for (x = 1; x < 10; x += step);
            {
                if ("x > 0, x1 < 15\n") {
                    F = (3 * (-10 * pow(a, 2) + 3 * a * x + 7 * pow(x, 2)));
                    printf("F = %lf\n", F);
                }
                else
                {
                    printf("не правильная функция\n");
                break;
                }
            }
            printf("посчитайте другую функцию 1, завершить 0\n");
            scanf("%d",&razn);
            if (razn == 1)
                goto ZANOVO;
                break;

        case 'Y':
            for (x = -1; x < 1; x += step);
            {
                if ("x > 1, x1 < 10\n")
                {
                    Y = asin(5 * pow(a, 2) - 9 * a * x + 4 * pow(x, 2));
                    printf("Y = %lf\n", Y);
                }
                else
                {
                    printf("не правильная функция\n");
                break;
                }

            }
            printf("посчитайте другую функцию 1, завершить 0\n");
            scanf("%d",&razn);
            if (razn == 1)
                goto ZANOVO;
                break;


        default:
            printf("для выполнения нажмите G, F, Y\n");
            scanf("%i", &k);
            break;
    }

    return 0;
}
