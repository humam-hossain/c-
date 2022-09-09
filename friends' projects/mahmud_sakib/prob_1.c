// Input a number and display summation of all factors of that number. Calculating summation of factors should be done 
// in a function. 
// Sample Input: 10
// Sample Output: 18

#include<stdio.h>
#include<math.h>

int FactorSum(int p){
    if(p == 1)
        return 1;
 
    int result = 0;

    for (int i = 2; i <= sqrt(p); i++)
    {
        if (p % i == 0)
        {
            if (i == (p / i))
                result += i;
            else
                result += (i + p/i);
        }
    }

    return (result + p + 1);
}

int main()
{
    int num, sum;

    scanf("%d", &num);
    sum = FactorSum(num);
    printf("%d", sum);

    return 0;
}

