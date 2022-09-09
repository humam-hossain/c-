// 9. For this problem you need to calculate the weekly salary of a worker for his working hours. This 
// program takes a list of hours worked each day. A worker earns $10 for the first 8 hours. For 
// overtime hours he earns $15. On weekends the employer pays double the usual rate. For example 
// 10 hours worked on a weekday would pay 80+30=$110 but on weekend it would be 160+60=220 
// Sample Input: 8  8  8  8  8  0  0 Sample Output: 400 
// Sample Input: 10  10  10  0  8  0  0  Sample Output: 410 
// Sample Input: 0  0  0  0  0 12  0 Sample Output: 280

#include <stdio.h>

int main()
{
    int hours[7];
    int temp, salary = 0;

    // info
    printf("Department: type_dep\n");
    printf("Name: type_name\n");
    printf("ID: type_id\n\n");

    for(int i=0; i<7; i++){
        temp = 0;
        scanf("%d", &hours[i]);

        if(hours[i] <= 8){
            temp += hours[i] * 10;
        }else{
            temp += 80 + (hours[i] - 8) * 15;
        }

        if(i > 4){
            temp *= 2;
        }

        salary += temp;
    }

    printf("%d", salary);
    
    return 0;
}