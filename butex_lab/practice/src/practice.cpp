#include <stdio.h>
int main()
{
    int x, y, i, count=0, n, temp;
    printf("Enter the first no: ");
    scanf("%d", &x);
    printf("Enter the last no: ");
    scanf("%d", &y);
    
    for (n = x; n <= y; n++)
    {
        count = 0;
        temp = n;
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        printf("n = %d: count = %d\n", n, count);
        if (count == 2)
        {
            printf("%d is a prime number\n", temp);
        }
    }
    return 0;
}