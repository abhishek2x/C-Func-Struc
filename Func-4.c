// Find out the middle element of the String
#include <stdio.h>
#include <string.h>

char func(char []);

void main()
{
    char b[5] = {'t', 'r', 'y', 'e', 'p'};
    char mid = func(b);
    printf("MIDDLE CHARACTER = %c", mid);
}

char func(char a[])
{
    char ans = a[strlen(a)/2];
    return ans;
}
