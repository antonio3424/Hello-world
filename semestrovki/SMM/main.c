#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i, j, m, l, t, K[60], n = 5, buffer[n];
    double SMM[63];

    FILE *file;
    file = fopen("/home/CLionProjects/untitled10/SMM.dat", "w+");
    for (i = 0; i < 20; i++) {
        K[i] = rand() % 150;
    }
    for (m = 1; i < 49; m++) {
        if (m == 1){
        for (i = 0; i < 3; i++) {
            buffer[i] = K[i];
            }
        }
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2 - i; j++) {
                if (buffer[j] > buffer[j + 1]) {
                    t = buffer[j];
                    buffer[j] = buffer[j + 1];
                    buffer[j + 1] = t;
                }
            }
        }
        printf("%i\n", buffer[0]);
        printf("%i\n", buffer[1]);
        printf("%i\n", buffer[2]);
        SMM[m] = buffer[1];
        buffer[0] = K[m - 2];
        buffer[1] = K[m - 1];
        buffer[2] = K[m];
    }
    for (i = 0, j = n; i < 60, j < 60;) {

        fprintf(file, "%i %i %lf \n ", i, K[i], SMM[j]);

        fclose(file);
        return 0;
    }
}

