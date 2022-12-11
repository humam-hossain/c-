#include <stdio.h>

int convert_time(char m[], int hr)
{
    if(m[0] == 'A'){
        if(hr == 12){
            hr = 0;
        }
    }else if(m[0] == 'P'){
        if (hr != 12){
            hr = hr + 12;
        }
    }

    return hr;
}

int main()
{
    int hr, min;
    char m[2];

    scanf("%d", &hr);
    scanf("%d", &min);
    scanf("%s", m);

    hr = convert_time(m, hr);

    printf("%d:%d", hr, min);

    return 0;
}