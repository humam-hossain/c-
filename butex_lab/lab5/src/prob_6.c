#include<stdio.h>

int main()
{
    int i, num, flag=1;

    scanf("%d", &num);

    if(num==1 || (num!=2 && num%2==0)){
        flag=0;
    }else{
        for(i=3; i<num; i+=2){
            if(num%i==0){
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1){
        printf("prime");
    }else{
        printf("not prime");
    }

    return 0;
}
