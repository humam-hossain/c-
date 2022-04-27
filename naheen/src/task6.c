// 6. In Mathematics Primorial denoted by ‘#’ is a function from natural number to natural number 
// similar to factorial function, but rather than successively multiplying positive integers, the function 
// only multiplies prime numbers.        
// Now, write a C program that takes a number as input and outputs its primorial.   

// Sample Input: 1  Sample Output: 2   //First prime number=2  
// Sample Input: 2  Sample Output: 6   //Product of first two prime numbers 2*3=6 
// Sample Input: 6 Sample Output: 30030  
 
#include <stdio.h>

int isPrime(int num)
{
    if(num % 2 == 0){
        return 0;
    }
    if(num == 3){
        return 1;
    }

    for(int i=3; i<num; i+=2){
        if(num%i == 0){
            return 0;
        }
    }
    
    return 1;
}

int main()
{
    int n, prime=2, isTrue;
    int primorial = 1;

    // info
    printf("Department: type_dep\n");
    printf("Name: type_name\n");
    printf("ID: type_id\n\n");

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        primorial *= prime;
        
        isTrue = 0;
        while(!isTrue){
            prime++;

            isTrue = isPrime(prime);
        }
    }

    printf("%d", primorial);

    return 0;
}
