// 5. Imagine you work in a toy car workshop, and your job is to build toy cars from a collection of parts. 
// Each toy car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside. Given the total 
// number of wheels, car bodies and figures available, how many complete toy cars can you make?  
// Sample Input: 2, 48, 76    // 2 wheels, 48 car bodies and 76 figures 
// Sample Output: 0  

// Sample Input: 43, 15, 87   // 43 wheels, 15 car bodies and 87 figures 
// Sample Output: 10  

// Sample Input: 88, 37, 17  //  88 wheels, 37 car bodies and 17 figures 
// Sample Output: 8

#include <stdio.h>

int main()
{
    int wheels, car_body, figures;
    int toy_cars;

    // info
    printf("Department: type_dep\n");
    printf("Name: type_name\n");
    printf("ID: type_id\n\n");

    scanf("%d %d %d", &wheels, &car_body, &figures);

    // 4 wheels, 1 car body, and 2 figures
    wheels = wheels/4;
    car_body = car_body/1;
    figures = figures/2;

    toy_cars = wheels;

    if(car_body < toy_cars){
        toy_cars = car_body;
    }
    if(figures < toy_cars){
        toy_cars = figures;
    }

    printf("%d", toy_cars);


    return 0;
}