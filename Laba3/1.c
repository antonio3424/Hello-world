#include <stdio.h>
#include <math.h>
int main() {
    double x, a, x1, G, F, Y, G2, F2, Y2, step, razn;
    int k;

    printf("%s", "введите x: ");
    scanf("lf", &x);

    printf("%s", "введите x2 ");
    scanf("lf", &x1);

    printf("%s", "введите a: ");
    scanf("lf", &a);

    printf("%s", "введите шаг: ");
    scanf("lf", &step);

    printf("%s", "введите разницу между функциями: ");
    scanf("%s", &razn);

    printf("%s", "введите G=1 F=2 Y=3: ");
    scanf("i", &k);

    switch (k) {
        case 1:
            while (x < x1)
            {
                if (-4 * pow(a, 2) + a * x + 5 * pow(x, 2) >= 0.00001)
                {
                    G = (7 * (54 * pow(a, 2) - 33 * a * x + 4 * pow(x, 2))) / (-4 * pow(a, 2) + a * x + 5 * pow(x, 2));
                    printf("G = %f\n", G);
                    G2 = (7 * (54 * pow(a, 2) - 33 * a * (x + step) + 4 * pow(x + step, 2))) /
                         (-4 * pow(a, 2) + a * (x + step) + 5 * pow(x + step, 2));
                if (G2 - G == razn)
                {
                    G2 = (7 * (54 * pow(a, 2) - 33 * a * (x + step) + 4 * pow(x + step, 2))) /
                         (-4 * pow(a, 2) + a * (x + step) + 5 * pow(x + step, 2));
                    break;
                }
                    else
                {
                    step *= 2;
                    G2 = (7 * (54 * pow(a, 2) - 33 * a * (x + step) + 4 * pow(x + step, 2))) /
                    (-4 * pow(a, 2) + a * (x + step) + 5 * pow(x + step, 2));
                    {
                        if (x >= x1)
                            break;
                    }
                }
            }
            else
                {
                    printf("Функция не задана");

                }
            }
            break;


    case 2:
        while (x < x1)
        {
            if (3 * (-10 * pow(a, 2) + 3 * a * x + 7 * pow(x, 2)) > 0.00001);
            printf("%f\n", F);
            F2 = (3 * (-10 * pow(a, 2) + 3 * a * (x + step) + 7 * pow(x + step, 2)));
            if (F2 - F == razn)
            {
                F2 = (3 * (-10 * pow(a, 2) + 3 * a * (x + step) + 7 * pow(x + step, 2)));
                break;
            }
            else
            {
                step *= 2;
                F2 = (3 * (-10 * pow(a, 2) + 3 * a * (x + step) + 7 * pow(x + step, 2)));
                {
                    if ( x>= x1)
                        break;
                }

            }
            else
            {
                printf("значение выражения не принадлежит области определения функции");
            }
        }
         break;


    case 3:
        while (x < x1)
        {
            Y =  asin(5 * pow(a, 2) - 9 * a * x + 4 * pow(x, 2));
            if ((Y >= -1) && (Y <= 1))
            {}
            printf("%f\n", Y);
            Y2 =  asin(5 * pow(a, 2) - 9 * a * (x + step) + 4 * pow(x + step, 2));
            if (Y2 - Y == razn)
            {
                Y2 =  asin(5 * pow(a, 2) - 9 * a * (x + step) + 4 * pow(x + step, 2));
                break;
            }
            else
            {
                step *= 2;
                Y2 =  asin(5 * pow(a, 2) - 9 * a * (x + step) + 4 * pow(x + step, 2));
                {
                    if (x >= x1)
                        break;
                }
            }
        }
         else
            {
                printf("значение не найдено,введите другие переменные");
                getchar();
                break;
            }
        }
    default :
        printf("Ошибка");
}
return 0;
