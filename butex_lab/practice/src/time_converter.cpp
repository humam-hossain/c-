#include<stdio.h>
#include<string.h>

void convert_time(char time_12[], char time_24[])
{
    strcpy(time_24, time_12);

    if(time_24[5] == 'A' || time_24[5] == 'a'){
        if(time_24[0] == '1' && time_24[1] == '2'){
            time_24[0] = '0';
            time_24[1] = '0';
        }
    }else{
        int hr = (time_24[0] - '0') * 10 + (time_24[1] - '0');
        if(hr != 12){
            hr = hr+12;

            time_24[1] = (hr % 10) + '0';
            hr = hr/10;
            time_24[0] = (hr % 10) + '0';
        }
    }

    time_24[5] = '\0';
}

int main()
{
    char time_12[7];
    char time_24[7];

    scanf("%s", time_12);
    convert_time(time_12, time_24);

    printf("%s", time_24);

    return 0;
}

/* 2nd method

#include<stdio.h>
#include<string.h>

void convert_time(char time[])
{
    if(time[5] == 'A' || time[5] == 'a'){
        // 12:00AM -> 00:00
        // 01:00AM -> 01:00

        if(time[0] == '1' && time[1] == '2'){ // 12
            time[0] = '0';
            time[1] = '0';
        }
    }else{
        if(time[0] == '1'){
            if(time[1] == '0'){
                // 10:00PM -> 22:00
                time[0] = '2';
                time[1] = '2';
            }else if(time[0] == '1'){
                // 11:00PM -> 23:00
                time[0] = '2';
                time[1] = '3';
            }
        }else{
            // 09:00PM -> 21:00
            if(time[1] == '9'){

            }
            // 08:00PM -> 20:00

            // 07:00PM -> 19:00
            // 03:00PM -> 15:00
        }
        // 12:00PM -> 12:00
    }

    time[5] = '\0';
}

int main()
{
    // 12:00AM -> 00:00
    // 12:00PM -> 12:00
    // 03:00AM -> 03:00
    // 03:00PM -> 15:00

    char time[7];

    scanf("%s", time);

    convert_time(time);

    printf("%s", time);

    return 0;
}

*/