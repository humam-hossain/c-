// Write a C program which can input some rivers name, length and country of origin. 
// Display the name of the longest river

#include<stdio.h>
#define MAX_LIMIT 1000

struct River
{
    char name[MAX_LIMIT];
    double length;
    char country_of_origin[MAX_LIMIT];
};

int main()
{
    int n;
    struct River rivers[MAX_LIMIT];
    int max_river_id = 0;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("River No.%d\n", i);
        printf("Name:");
        scanf("%s", &rivers[i].name);
        printf("Length:");
        scanf("%lf", &rivers[i].length);
        printf("Country of Origin:");
        scanf("%s", &rivers[i].country_of_origin);
        printf("\n");

        if(rivers[i].length > rivers[max_river_id].length){
            max_river_id = i;
        }
    }

    printf("Result:\nLongest River: %s", rivers[max_river_id].name);

    return 0;
}