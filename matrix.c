#include <stdio.h>

void matrixAddition(int a[10][10], int b[10][10], int r, int c)
{
    int i, j;

    printf("\nMatrix Addition:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

void matrixMultiplication(int a[10][10], int b[10][10], int r1, int c1, int c2)
{
    int i, j, k;
    int result[10][10];

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for(k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMatrix Multiplication:\n");

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void transpose(int a[10][10], int r, int c)
{
    int i, j;

    printf("\nTranspose of Matrix:\n");

    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], b[10][10];
    int r, c, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("\nEnter elements of Matrix A:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    matrixAddition(a, b, r, c);
    matrixMultiplication(a, b, r, c, c);
    transpose(a, r, c);

    return 0;
}