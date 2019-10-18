
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
    printf("\n\nTWO-D ARRAY : \n\n");
    for (int i = 0; i < 3; i++)
    {