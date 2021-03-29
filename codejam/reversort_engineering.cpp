#include <iostream>
#include <cstring>
#include <stdio.h>
#include <bits/stdc++.h>

int j_findout(int arr[], int i, int size)
{
    int j=i;
    int l;
    int temp;

    for(int k=i+1; k<size; k++){
        if(arr[k] < arr[j]){
            j = k;
        }
    }

    l=j;
    for(int k = i; k<=l; k++, l--){
        temp = arr[k];
        arr[k] = arr[l];
        arr[l] = temp;
    }
    return j-i+1;
}

int display(int a[], int n)
{
    int arr[100];
    int cost = 0;

    for(int i=0; i<n; i++){
        arr[i] = a[i];
    }
    for(int i=0; i<n-1; i++){
        cost = cost + j_findout(arr,i,n);
    }

    return cost;
}

bool possibility_judgement(int arr_size, int given_cost)
{
    int highest_value = 0;
    int lowest_value = arr_size - 1;
    for (int i = arr_size; i > 1; i--)
    {
        highest_value += i;
    }
    if (given_cost > highest_value || given_cost < lowest_value)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int T;
    int n;
    int a[100];
    long given_cost;
    int cost;
    int min_value, max_value;

    scanf("%d",&T);

    for(int t=0; t<T; t++){
        scanf("%d %d", &n,&given_cost);

        // min_value = n-1;
        // max_value = 0;

        // for(int i=2; i<=n; i++){
        //     max_value += i;    
        // }

        if (possibility_judgement(n, given_cost)){
            //initial array
            for(int i=0; i<n; i++){
                a[i] = i+1;
            }

            std::sort(a, a + n);

            do {
                cost = display(a, n);
                if(cost == given_cost){
                    break;
                }
            } while (std::next_permutation(a, a + n));

            printf("Case #%d: ",t+1);
            for (int i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");            
        }else{
            printf("Case #%d: IMPOSSIBLE\n", t+1);
        }    
    }
	return 0;
}


/* 
1
4
4 2 1 3
N=4, L=[4,2,1,3]

N-1 = 3 iterations
    1. i=1, j=2 -> [1,2,4,3] j-i+1 = 3
    2. i=1, j=1 -> [1,2,4,3] j-i+1 = 1
    3. i=2, j=3 -> [1,2,3,4] j-i+1 = 2

cost = 3+1+2 = 6

i -> last = minimum value of L

j-i+1

4 2 1 3  i=1 j=3 => 3 
1 2 4 3  i=2 j=2 => 1
1 2 4 3  i=3 j=4 => 2

7 6 5 4 3 2 1 i=1 j=7 =>7
1 2 3 4 5 6 7 i=2 j=2 =>1
1 2 3 4 5 6 7 i=3 j=3 =>1
1 2 3 4 5 6 7 i=4 j=4 =>1
1 2 3 4 5 6 7 i=5 j=5 =>1
1 2 3 4 5 6 7 i=6 j=6 =>1

3
4
4 2 1 3
2
1 2
7
7 6 5 4 3 2 1










T
N C

N = 4
    24

    L = [2,3,4,1]

    1 2 3 4 i=1,j=4 j-i+1 = 4 -1 + 1 = 4(N) -> [1,4,3,2]
    1 2 3   i=2,j=4 j-i+1 = 4 -2 + 1 = 3 -> [1,2,3,4]
    1 2     i=3,j=3 j-i+1 = 4-3+1 =    2

    maximum_value = 2+3+....+N
    minimum_value = N-1

    3 = 1 + 1 + 1
    4 = 1 + 1 + 2 / 1 + 2 + 1 / 1 + 3 + 1 / 2 + 1 + 1
    5 = 1 + 1 + 3 / 1 + 2 + 2 / 1 + 3 + 1 / 2 + 1 + 2 / 2 + 2 + 1
        1, 2, 3


    3<cost<9
    
    1 2 3
    1 2

    2<cost<5

    2 = 1 + 1
    3 = 1 + 2 / 2 + 1
    4 = 2 + 2
    5 = 2 + 3


*/
