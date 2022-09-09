// Input two numbers and display how many common factors are available in those two numbers. 
// Calculating the number of common factors should be done in a function.
// Sample Input: 10 15
// Sample Output: 2

#include<stdio.h>
#include<math.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int CommonFactor(int p, int q)
{
    int n = gcd(p, q);
 
    int result = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                result += 1;
            else
                result += 2;
        }
    }
    return result;
}

int main()
{
    int a, b, result;

    scanf("%d%d", &a, &b);
    result = CommonFactor(a, b);
    printf("%d", result);

    return 0;
}