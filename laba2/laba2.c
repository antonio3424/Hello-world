#include <math.h>
#include <stdio.h>
int main() {
    double x, a, G, F, Y;
    char r;
    scanf("%f", &x);
    scanf("%f", &a);
    printf("введите букву G, F, Y\n");
    scanf("%s", &r);

    switch (r) {
        case 'G':
            G = (7 * (54 * pow(a, 2) - 33 * a * x + 4 * pow(x, 2))) / (-4 * pow(a, 2) + a * x + 5 * pow(x, 2));
            print("G = %lf\n", G);
            break;

        case 'F':
            F = (3 * (-10 * pow(a, 2) + 3 * a * x + 7 * pow(x, 2)));
            print("F = %lf", F);
            break;

        case 'Y':
            Y = math.asin(5 * pow(a, 2) - 9 * a * x + 4 * pow(x, 2));
            print("Y = %lf", Y);
            break;
        default:
            break;
    }
    return 0;
}