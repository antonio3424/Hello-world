#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(){

    int k;
    long int s = 0, p = 0, v = 0;
    double G, F, Y, x, a, x2, l;
    char start[200], finish[800], source[100];

    printf("Введите x меньше x2:");
    scanf("%s", start);
    x = atof(start);
    getchar();
    memset(start, 0, 200);

    printf("Введите x2: ");
    scanf("%s", start);
    x2 = atof(start);
    getchar();
    memset(start, 0, 200);

    printf("Введите a: ");
    scanf("%s", start);
    a = atof(start);
    getchar();
    memset(start, 0, 200);

    printf("Введите шаг: ");
    scanf("%s", start);
    l = atof(start);
    memset(start, 0, 200);

    printf("Введите шаблон: ");
    scanf("%s", source);
    getchar();
    memset(start, 0, 200);

    printf("%s", "Введите G-1 F-2 Y-3: ");
    scanf("%i", &k);
    getchar();
    memset(start, 0, 200);
    memset(finish, 0, 800);

    switch (k) {
        case 1:
            while (x < x2) {

                    G = (9 * (7 * a * a - 19 * a * x + 10 * x * x)) / (25 * a * a + 30 * a * x + 9 * x * x);
                sprintf(start, "%lf", G);
                strcat(finish, start);
                x = x + l;
                if (x >= x2) {
                    break;
                }
            }
            printf("%s\n", finish);
            while (s < strlen(finish)) {
                s = strstr(finish, source) - finish + 1;
                while (v != s) {
                    finish[v] = ' ';
                    v++;
                }
                v = 0;

                if (strstr(finish, source) == 0)
                    break;
            }
            printf("Всего совпадений: %ld\n",p);
            break;

        case 2:
            while (x < x2) {

                    F = cos(9 * a * a - 13 * a * x - 10 * x * x);
                sprintf(start, "%lf", F);
                strcat(finish, start);
                x = x + l;

                if (x >= x2) {
                    break;
                }
            }
            printf("%s\n", finish);
            while (s < strlen(finish)) {
                s = strstr(finish, source) - finish + 1;
                while (v != s) {
                    finish[v] = ' ';
                    v++;
                }
                v = 0;

                if (strstr(finish, source) == 0)
                    break;
            }
            printf("Всего совпадений: %ld\n",p);
            break;

        case 3:
            while (x < x2) {

                    Y = (log(-80 * a * a - 46 * a * x + 21 * x * x + 1)) / (log(10));
                sprintf(start, "%lf", Y);
                strcat(finish, start);
                x = x + k;

                if (x >= x2) {
                    break;
                }
            }
            printf("%s\n", finish);
            while (s < strlen(finish)) {
                s = strstr(finish, source) - finish + 1;
                while (v != s) {
                    finish[v] = ' ';
                    v++;
                }
                v = 0;

                if (strstr(finish, source) == 0)
                    break;
            }
            printf("Всего совпадений: %ld\n",p);
            break;

        default:
            printf("Неправильно выбрана функция.");

    }
}