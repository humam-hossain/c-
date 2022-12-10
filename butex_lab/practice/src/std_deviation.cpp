#include<stdio.h>
#include<math.h>
#define GSM_SIZE 5
#define STD_GSM 100

float std_deviation(int gsm[])
{
    int i;
    float std_dev = 0;

    for(i=0; i<GSM_SIZE; i++){
        std_dev += pow((gsm[i] - STD_GSM), 2);
    }

    return sqrt(std_dev / GSM_SIZE);
}

int main()
{
    int i, gsm[GSM_SIZE];
    
    for(i=0; i<GSM_SIZE; i++){
        scanf("%d", &gsm[i]);
    }

    if(std_deviation(gsm) < 1.5){
        printf("The fabric is accepted");
    }else{
        printf("The fabric is rejected");
    }

    return 0;
}