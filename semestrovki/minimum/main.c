#include <stdio.h>
    double F(double x){
        return  x*x*4+x*2;
    }
int main(){
    int k=0;
    double a, b, F, f1, f2, e, x;

    printf("%s","Введите число a:");
    scanf("%lf", &a);
    printf("%s","Введите число b:");
    scanf("%lf",&b);
    printf("%s","Введите точность:");
    scanf("%lf", &e);
    do {
        x = (a + b) / 2;
        f1 = F * (x - e);
        f2 = F * (x + e);
        if (f1<f2)
            b = x;
        else
            a = x;
        k += 1;
    }
    while((a-b)>=e);
    printf("результат = %lf \n", a);
    return 0;
}
