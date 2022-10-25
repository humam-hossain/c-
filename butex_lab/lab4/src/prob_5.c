#include<stdio.h>

int main()
{
    int x, y; 
    float z=0;

    for(x=3; x<=6; x++){
        for(y=4; y<=8; y++){
            z += 1/(x+y);
        }
    }

    printf("%f", z);
    
    return 0;
}