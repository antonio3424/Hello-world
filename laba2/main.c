#include <stdio.h>
#include <math.h>

int main()
{
    char (r);
    double G, F, Y, x, a;
    scanf("%lf", &x);
    scanf("%lf", &a);
    printf("Ведите букву G,F,Y");
    scanf("%s", &r);
    printf("Введите переменную для Y от -1 до 1");
    switch (r) {
        case 'G': {
            G = (7 * (54 * pow(a, 2) - 33 * a * x + 4 * pow(x, 2))) / (-4 * pow(a, 2) + a * x + 5 * pow(x, 2));
            printf("G = %.3f\n", G);
            break;
        }
        case'F': {
            F = (3 * (-10 * pow(a, 2) + 3 * a * x + 7 * pow(x, 2)));
            printf("F = %.3f\n", F);
            break;
        }
        case 'Y':{
            Y = asin(5 * pow(a, 2) - 9 * a * x + 4 * pow(x, 2));
            printf("Y = %.3f\n", Y);
            break;
        }

        default:
            break;
    }
    return 0;
}