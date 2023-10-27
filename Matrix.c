#include <stdio.h>

int creatematrix(int r, int c, int A[][c])
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
}

int printmatrix(int r, int c, int A[][c])
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        printf("\n");
        for (j = 1; j <= c; j++)
        {
            printf("%d ", A[i][j]);
        }
    }
}

int main()
{
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int A[r][c], rowsum[r][c];
    creatematrix(r, c, A);
    printmatrix(r, c, A);
}
