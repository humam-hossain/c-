// This problem is called FizzBuzz problem where you have to write a C program in such a way so that it 
// prints sequence of numbers upto N terms and for multiples of 3 it should print “Fizz” and for 
// multiples of 5 it should print “Buzz” instead of the number. And for numbers which are multiples of 
// both 3 and 5 it should print “FizzBuzz” instead of the number.  
// Sample Input: N=10 Sample Output: 1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 
// Sample Input: N=15 Sample Output: 1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz

#include <stdio.h>

int main()
{
    int n;

    // info
    printf("Department: type_dep\n");
    printf("Name: type_name\n");
    printf("ID: type_id\n\n");

    printf("N=");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i%3 == 0 && i%5 == 0){
            printf("FizzBuzz ");
        }else if(i%5 == 0){
            printf("Buzz ");
        }else if(i%3 == 0){
            printf("Fizz ");
        }else{
            printf("%d ", i);
        }
    }

    return 0;
}