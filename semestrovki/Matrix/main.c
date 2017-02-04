#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){
    int i, j;
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int  m;
    printf("введите матрицу%ix%i\n",N,N);
    for (i=0; i<N; i++)
    {
        printf("элем %i-й строки:\n",i+1);
        for (j=0; j<N; j++)
        {
            scanf("%i", &a[i][j]);
        }
    }
    printf("\nПервая матрица\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%3i",a[i][j]);
        }
        printf("\n");
    }
    printf("введите матрицу%ix%i\n",N,N);
    for (j=0; j<N; j++)
    {
        printf("элем %i-й строки:\n",j+1);
        for (i=0; i<N; i++)
        {
            scanf("%i", &b[j][i]);
        }
    }
    printf("\nВторая матрица\n");
    for(j=0; j<N; j++)
    {
        for(i=0; i<N; i++)
        {
            printf("%3i",b[j][i]);
        }
        printf("\n");
    }
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            c[i][j]=0;
    printf("\nУмножение матриц\n");
    for(i=0;i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            for(m=0; m<N; m++)
            {
                c[i][j]+=a[i][m]*b[m][j];
            }
        }
    }
    printf("\nИтоговая матрица\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%3i",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}