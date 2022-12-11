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