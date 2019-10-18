// Passing of 2-D array
#include <stdio.h>
#include "2-Dsum.h"
#include "2-Ddiff.h"
#include "2-Dmulti.h"

void Sum(int [][], int [][], int);
void Diff(int [][], int [][], int);
void Multi(int [][], int [][], int);

int n = 3;

int main()
{
    int a[n][n];
    int b[n][n];
    printf("ENTER VALUES IN MATRIX A");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("ENTER VALUES IN MATRIX B");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    Sum(a[n][n], b[n][n], n);
    Diff(a[n][n], b[n][n], n);
    Multi(a[n][n], b[n][n], n);
    return 0;
}
