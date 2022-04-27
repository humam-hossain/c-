// 7. Write a C program that takes three numbers — the width and height of a rectangle, and the radius 
// of a circle — and prints true if the rectangle can fit inside the circle, false if it can't.  
// Sample Input: 8, 6, 5 Sample Output: True 
// Sample Input: 5, 9, 5 Sample Output: False

#include <stdio.h>
#include <math.h>

int main()
{
    int width, height, radius;

    // info
    printf("Department: type_dep\n");
    printf("Name: type_name\n");
    printf("ID: type_id\n\n");

    scanf("%d %d %d", &width, &height, &radius);

    if(sqrt(width*width + height*height)/2 == radius){
        printf("True");
    }else{
        printf("False");
    }

    return 0;
}