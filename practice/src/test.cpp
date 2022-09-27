#include <stdio.h>

int main()
{
    int i = 2;
    int b;

    b = ++i + ++i;

    printf("%d", b);
}