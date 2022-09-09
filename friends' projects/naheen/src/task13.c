// 13.  Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....] up to a specific 
// number of terms.  
// Sample Input: x=3 
// Number of terms=5  
// Sample Output: 16.375 

// Sample Input: x=1 
// Number of terms=10 
// Sample Output: 2.718282 

// Sample Input: x=5 
// Number of terms=8 
// Sample Output: 128.619064


#include <stdio.h>
#include <math.h>

double factorial(int num)
{
    double fact = 1;

    for(int i=1; i<=num; i++){
        fact *= i;
    }

    return fact;
}

int main()
{
    int x, num_of_terms;
    double sum = 0;

    // info
    printf("Department: type_dep\n");
    printf("Name: type_name\n");
    printf("ID: type_id\n\n");

    printf("x=");
    scanf("%d", &x);
    printf("Number of terms=");
    scanf("%d", &num_of_terms);

    for(int i=0; i<num_of_terms; i++){
        sum += pow(x, i)/factorial(i);
    }

    printf("%lf", sum);

    return 0;
}