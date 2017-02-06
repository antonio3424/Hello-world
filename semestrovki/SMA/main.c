#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i, k, j, p[35], razn[35];
    double sma[10];
    k = 5;
    for(i = 0; i < 35; i++)
    {
        razn[i] = rand() % 25;
    }
p[0] = razn[0];
    for(i = 0; i < 35; i++)
    {
        for(j = i - k;j < i - 1; ++j)
        {
            if (i > 0){
                p[j] = razn[j] + p[j - 1];
            }
        }
        if (i > k)
        {
            sma[i] = p[j - 1]/k;
            printf("среднее значение %lf\n  %d\n", sma[i], razn[1]);
        }
        memset(p,0,25);
    }
    return 0;
}