// An employee working at a very bizarre company earns one dollar on their first day. However, for 
// every day that passes, their base amount doubles, so they earn two dollars on the second day and 
// four dollars on the third day (totalling 7 dollars). Given a number of days, print how many dollars the 
// employee accumulates.  
// Sample Input: 1 Sample Output: 1 
// Sample Input: 2 Sample Output: 3 
// Sample Input: 3 Sample Output: 7  
 
#include <stdio.h>

int main()
{
    int num_of_days, base = 1, total_income = 0;

    // info
    printf("Department: type_dep\n");
    printf("Name: type_name\n");
    printf("ID: type_id\n\n");

    scanf("%d", &num_of_days);

    for(int i=1; i<=num_of_days; i++){
        total_income += base;
        base = base * 2;
    }

    printf("%d", total_income);

    return 0;
}