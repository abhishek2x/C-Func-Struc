#include <stdio.h>
 
int fact(int);

void main()
{
    int f = fact(5);
    printf("FACTORIAL = %d", f);
}

int fact(int n)
{
    if(n == 1)
    return n;
    else
    return n* fact(n-1);    
}
