#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n = 5, K[25], L[25];
    double EMA[25], m;
    m = 2.0/(n + 1);

    FILE *file;
    file = fopen("/home/CLionProjects/untitled9/SMA.dat", "w+");

    for (i = 0; i < 25; i++) {
        K[i] = rand() % 150;
    }
    L[0] = K[0];

    for (i = 0; i < 20; i++) {
        if (i - n == 0) {
            for (j = i - n; j < i; j++) {
                if (j >= 1) {
                    L[j] = K[j] + L[j - 1];
                }
            }
        }
        if (i == n) {
            EMA[i] = L[j - 1] / n;
        }
        if (i > n) {

            EMA[i] = m * K[i] + (1 - m) * EMA[i - 1];
        }
            printf("%lf\n", EMA[i]);
        }
    for (i = 0, j = n; i < 20, j < 20;) {
        fprintf(file, "%i, %lf \n", i, K[i]);
        fprintf(file, "%i, %lf \n ", i, EMA[j]);
    }

        fclose(file);
        return 0;
    }

