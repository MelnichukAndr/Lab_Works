#include <stdio.h>
#include <conio.h>
#include <iostream>
#define N 9

int main()
{
    int spiral[N][N];
    int i, j, k, edge, num = N * N;
    for (k = 0; k < N / 2; k++) //слои
    {
        edge = N - 1 - k;
        for (j = k; j < edge; j++, num--)
            spiral[k][j] = num;
        for (i = k; i < edge; i++, num--)
            spiral[i][edge] = num;
        for (j = edge; j > k; j--, num--)
            spiral[edge][j] = num;
        for (i = edge; i > k; i--, num--)
            spiral[i][k] = num;
    }

    if (N % 2) //если N-нечетное дополнить центральным элементом
        spiral[N / 2][N / 2] = num;


    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++) printf("%6d", spiral[i][j]);
        printf("\n");
    }

  
    return 0;
}