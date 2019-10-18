#include <stdio.h>
void funcSum(int*, int*);  // Call by reference
void funcDiff(int*, int*);  
void funcar(int*);
int funcs(int*);
void fun(int*);
int main()
{
    int a = 5;
    int b = 5;
    int arr[5] = {4,6,3,2,4};
    int a2[3][3] = {{3, 7, 4}, 
                    {2, 5, 8},
                    {5, 3, 6}};
    funcSum(&a, &b);
    funcDiff(&a, &b);
    funcar(&arr);
    int s = funcs(&arr);
    printf("SUM OF ELEMENTS OF ARRAY : %d\n" ,s);
    fun(&a2);
}

void funcSum(int *p, int *q)
{
    int sum = (*p) + (*q);
    printf("SUM OF TWO NUMBERS : %d\n", sum);
}


void funcDiff(int *p, int *q)
{
    int diff = (*p) - (*q);
    printf("DIFFERENCE OF TWO NUMBERS : %d\n", diff);
}
void funcar(int *a)
{
    printf("\nPRINTING ELEMENTS OF THE ARRAY\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(a + i));
    }
    printf("\n\n");
}

int funcs(int *a)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + *(a + i);
    }
    return sum;
}

void fun(int *p)
{
    int Sum = 0;
    printf("\n\nTWO-D ARRAY : \n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Sum = Sum + *((p + i) + j);
            printf("%d\t", *((p + i) + j));
        }
        printf("\n\n");
    }
    printf("SUM OF ELEMENTS OF 2-D ARRAY: %d\n\n", Sum);
}
