#include <stdio.h>
int main()
{
    double y, Xn;
    int shag = 0;
    printf("введите цифру:");
    scanf("%lf", &y);
    Xn = y;
    for (shag<0;shag = 200;shag < 201)
    if (Xn*Xn!=y) {
        shag++;
        Xn = (Xn + (y / Xn)) / 2;
    }
        else {(shag >= 210);
        break;
    }
    printf("Квадратный корень равен: %f", Xn);
    return 0;
}