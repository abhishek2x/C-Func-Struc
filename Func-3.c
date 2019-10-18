// Passing of 1-D array
// Passing of string
#include <stdio.h>

void func(int []);
void func2(char []);

int main()
{
    
    int c[5] = {4, 5, 3, 34, 6};
    char chr[5] = {'d', 'r', 't', 'r', 'e'};
    func(c);
    func2(chr);
}

void func(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
}

void func2(char arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%c", arr[i]);
    }
}
