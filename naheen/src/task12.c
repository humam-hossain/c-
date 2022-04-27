// 12.  Mr. X is interested to know about his zodiac sign and he asks you for help. Write a program that 
// takes birth date as input and returns the corresponding zodiac sign with personality prediction 
// message Your input must be in DDMMYY form for example if someone born in 29 October 2012 then the 
// input value will be 291012.

#include <stdio.h>

int main()
{
    char birth_date[6];
    int date, month;

    // info
    printf("Department: type_dep\n");
    printf("Name: type_name\n");
    printf("ID: type_id\n\n");

    scanf("%s", &birth_date);
    
    date = 10 * (birth_date[0] - 48) + (birth_date[1] - 48);
    month = 10 * (birth_date[2] - 48) + (birth_date[3] - 48);

    // printf("%d %d", date, month);

    if(month == 1){
        if(date < 20){
            printf("Capricorn\nYou are Clever");
        }else{
            printf("Aquarius\nYou are Sincere");
        }
    }else if(month == 2){
        if(date < 18){
            printf("Aquarius\nYou are Sincere");
        }else{
            printf("Pisces\nYou are Creative");
        }
    }else if(month == 3){
        if(date < 20){
            printf("Pisces\nYou are Creative");
        }else{
            printf("Aries\nYou are Bright");
        }
    }else if(month == 4){
        if(date < 20){
            printf("Aries\nYou are Bright");
        }else{
            printf("Taurus\nYou are Strong");
        }
    }else if(month == 5){
        if(date < 21){
            printf("Taurus\nYou are Strong");
        }else{
            printf("Gemini\nYou are Witty");
        }
    }else if(month == 6){
        if(date < 21){
            printf("Gemini\nYou are Witty");
        }else{
            printf("Cancer\nYou are Compassionate");
        }
    }else if(month == 7){
        if(date < 23){
            printf("Cancer\nYou are Compassionate");
        }else{
            printf("Leo\nYou are Proud");
        }
    }else if(month == 8){
        if(date < 23){
            printf("Leo\nYou are Proud");
        }else{
            printf("Virgo\nYou are Kind");
        }
    }else if(month == 9){
        if(date < 23){
            printf("Virgo\nYou are Kind");
        }else{
            printf("Libra\nYou are Peaceful");
        }
    }else if(month == 10){
        if(date < 23){
            printf("Libra\nYou are Peaceful");
        }else{
            printf("Scorpio\nYou are Bold");
        }
    }else if(month == 11){
        if(date < 22){
            printf("Scorpio\nYou are Bold");
        }else{
            printf("Sagittarius\nYou are Honest");
        }
    }else if(month == 12){
        if(date < 22){
            printf("Sagittarius\nYou are Honest");
        }else{
            printf("Capricorn\nYou are Clever");
        }
    }

    return 0;
}