// 2. Write a C program that takes three dimensions of a brick: height(a), width(b) and depth(c) and 
// outputs true if this brick can fit into a hole with the width(w) and height(h). 
//  You can turn the brick with any side towards the hole. 
//  We assume that the brick fits if its sizes equal the ones of the hole (i.e. brick size should 
// be less than or equal to the size of the hole, not strictly less). 
//  You can't put a brick in at a non-orthogonal angle. 

#include <stdio.h>

int main()
{
    int a,b,c;
    int w,h;
    int count = 0;

    // info
    printf("Department: type_dep\n");
    printf("Name: type_name\n");
    printf("ID: type_id\n\n");

    scanf("%d %d %d %d %d", &a, &b, &c, &w, &h);

    if((w >= a && (h >= b || h>= c)) || (w >= b && (h >= c || h >= a)) || (w >= c && (h >= a || h >= b))){
        printf("True");
    }else{
        printf("False");
    }

    return 0;
}