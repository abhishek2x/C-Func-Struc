
#include <math.h>
bool Armstrong(int n)
{
    int m = n;
    int a, b=0;
    while (n!=0)
    {
        a = n%10;
        b = b + pow(a, 3);
        n = n/10;
    }
    if(b == m)
    return true;
    else 
    return false;
}