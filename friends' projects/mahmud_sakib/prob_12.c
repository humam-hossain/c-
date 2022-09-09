/* 12. Write a C program which can input some days temperature and display the following
    Highest Temperature
    Lowest Temperature
    Average Temperature
    Number of days which is above average temperature
    Is highest temperature unique or it appears in multiple days
*/

#include <stdio.h>

#define MAX_LIMIT 1000

int main()
{
    double temperature[MAX_LIMIT];
    double highest_temp, lowest_temp, average_temp = 0, h_count = 0, above_avg = 0;
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &temperature[i]);
        average_temp += temperature[i];
    }

    average_temp = average_temp / n;

    highest_temp = temperature[0];
    lowest_temp = temperature[0];

    for (int i = 0; i < n; i++)
    {
        if (temperature[i] > highest_temp)
        {
            highest_temp = temperature[i];
            h_count = 1;
        }
        else if (temperature[i] == highest_temp)
        {
            h_count++;
        }

        if (temperature[i] < lowest_temp)
        {
            lowest_temp = temperature[i];
        }

        if (temperature[i] > average_temp)
        {
            above_avg++;
        }
    }

    printf("Highest Temperature: %lf\n", highest_temp);
    printf("Lowest Temperature: %lf\n", lowest_temp);
    printf("Average Temperature: %lf\n", average_temp);
    printf("Number of days which is above average temperature: %lf\n", above_avg);

    if (h_count > 1)
    {
        printf("highest temperature appears in multiple days.");
    }
    else
    {
        printf("unique highest temperature.");
    }

    return 0;
}