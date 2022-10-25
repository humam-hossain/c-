#include <stdio.h>

int main()
{
    int i, j, start, end, flag;

    scanf("%d %d", &start, &end);

    for (j = start; j <= end; j++){
        flag = 1;

        if (j != 1 && j != 2 && j % 2 == 0){
            flag = 0;
        }
        else{
            for (i = 3; i < j; i += 2){
                if (j % i == 0){
                    flag = 0;
                    break;
                }
            }
        }

        if (flag == 1){
            printf("%d\t", j);
        }
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int i, num, count, start, end;

//     scanf("%d %d", &start, &end);

//     for (num = start; num <= end; num++)
//     {
//         count = 0;
//         for (i = 1; i <= num; i++)
//         {
//             if (num % i == 0)
//                 count++;
//         }

//         if (count == 2)
//         {
//             printf("%d\t", num);
//         }
//     }
//     return 0;
// }
