#include <stdio.h>
#include <math.h>

int main() {
    char (Function);
    double x, x1, a, G, F, Y, step, pusk, completion;
    int k;

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


    printf("%s\n","начать restart - R, завершить finish - Q\n");
    scanf("%i", &k);

    switch (Function) {
        case 'G':
            for (x = pusk; x < completion; x += step);
            {
                if (-4 * pow(a, 2) + a * x + 5 * pow(x, 2) != 0) {
                    G = (7 * (54 * pow(a, 2) - 33 * a * x + 4 * pow(x, 2))) / (-4 * pow(a, 2) + a * x + 5 * pow(x, 2));
                    printf("G = %lf\n", G);
                } else {
                    printf("не правильная функция\n");
                }
            }
            break;

        case 'F':
            for (x = pusk; x < completion; x += step);
            F = (3 * (-10 * pow(a, 2) + 3 * a * x + 7 * pow(x, 2)));
            printf("lf = F\n", F);
            break;

        case 'Y':
            for (x = pusk; x < completion; x += step);
            Y = asin(5 * pow(a, 2) - 9 * a * x + 4 * pow(x, 2));
            printf("lf = Y\n", Y);
            break;
        default:
            printf("начать restart - R, завершить finish - Q\n");
            scanf("%i", &k);
            break;
    }
    return 0;
}