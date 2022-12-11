#include<stdio.h>
#include<string.h>

void convert_time(char time_12[], char time_24[])
{
    strcpy(time_24, time_12);

    if(time_24[5] == 'A' || time_24[5] == 'a'){ //PM
        if(time_24[0] == '1' && time_24[1] == '2'){
            time_24[0] = '0';
            time_24[1] = '0';
        }
    }else{ // PM
        if(time_24[0] == '1'){ // 10, 11, 12
            if(time_24[1] == '0'){  // 10:XXPM -> 22:XX
                time_24[0] = '2';
                time_24[1] = '2';
            }else if(time_24[1] == '1'){ //11:XXPM -> 23:XX
                time_24[0] = '2';
                time_24[1] = '3';
            }
        }else{ // 01, 08, 09
            if(time_24[1] == '8'){ // 08:XXPM -> 20:XX
                time_24[0] = '2';
                time_24[1] = '0';
            }else if(time_24[1] == '9'){ // 09:XXPM -> 21:XX
                time_24[0] = '2';
                time_24[1] = '1';
            }else{ //07:XXPM -> 19:XX
                time_24[0] = '1';
                time_24[1] = time_24[1] + 2;
            }
        }
    }

    time_24[5] = '\0';
}

int main()
{
    // 12:00AM -> 00:00
    // 03:30PM -> 15:30
    // 03:00AM -> 03:00
    // 12:00PM -> 12:00
    // 08:00PM -> 20:00

    char time_12[7];
    char time_24[7];

    scanf("%s", time_12);

    convert_time(time_12, time_24);

    printf("%s", time_24);

    return 0;
}