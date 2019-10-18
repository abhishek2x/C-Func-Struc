#include <stdio.h>
#include <stdbool.h>
#include "Armstrong.h"
bool Armstrong(int );

bool Prime(int n)
{
    int f=0;
    for (int i = 1; i < n; i++)
    {
        if(n%i==0)
        f++;
    }
    if(f==1)
    return true;
    else 
    return false;
}
bool Pallindrone(int n)
{
    int m = n;
    int a, b=0;
    while (n!=0)
    {
        a = n%10;
        b = a*10 + b;
        n = n/10;
    }
    if(b == m)
    return true;
    else 
    return false;
}
int main()
{
    int n, choice;
    printf("ENTER A NUMBER\n");
    scanf("%d", &n);
    printf("ENTER 1 TO CHECK PRIME\n");
    printf("ENTER 2 TO CHECK ARMSTRONG\n");
    printf("ENTER 3 TO CHECK PALLINDRONE\n");
    printf("ENTER YOUR CHOICE\n");
    scanf("%d", &choice);
    if(choice == 1)
    {
        if(Prime(n) == true)
        printf("IT IS A PRIME\n");
        else printf("IT IS NOT PRIME");
    }
    if(choice == 2)
    {
        if(Armstrong(n) == true)
        printf("IT IS A ARMSTRONG\n");
        else printf("IT IS NOT ARMSTRONG");
    }
    if(choice == 3)
    {
        if(Pallindrone(n) == true)
        printf("IT IS A PALLINDRONE\n");
        else printf("IT IS NOT PALLINDRONE");
    }
    return 0;
}
