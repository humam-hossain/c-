// The following math problem illustrates the essence of hacking:
// Use each of the numbers 1,3,4 and 6 exactly once with any
// of the four basic math operations (addition, subtraction,
// multiplication and division) to total. Each number must be
// used once and only once, and you may define the order of operations,
//  3 * (4+6) + 1 = 31 is valid, howerver incorrect, since it
// doesn't total 24.

// 6/(1–(3/4))
// = 6/(1/4)
// = 6 * 4
// = 24

#include <iostream>

using namespace std;

// int highmulti(int arr[], int n){
//     int highest_value = 1;
    
//     // a*b*(c+d)
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n && j!=i; j++){
//             int temp = 0;
//             for(int k=0; k<n && k!=i && k!=j; k++){
//                 temp += arr[k];
//             }
//             temp = arr[i] * arr[j] * temp;
//             if(temp > highest_value){
//                 highest_value = temp;
//             }
//         }
//     }

//     return highest_value;
// }

int arr_plus(int arr[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}

int arr_multi(int arr[], int n){
    int multi=1;
    for(int i=0; i<n; i++){
        multi *= arr[i];
    }
}

int essence_of_hacking(int arr[], int n, int ds_num)
{
    int result;
    int all_sum = arr_plus(arr, n);

    if(all_sum == ds_num){
        return all_sum;
    }

    int all_multi = arr_multi(arr, n);

    if(all_multi == ds_num){
        return all_multi;
    }
}

int main()
{
    // 24 = 4 * 6
    // take four integers
    int n, desired_num, ans;

    cout << "how many numbers are given?\n";
    cin >> n;

    int num_arr[n];

    cout << "Input all " << n << " numbers: \n";
    for(int i=0; i<n; i++){
        cin >> num_arr[i];
    }

    cout << "Input the desired number: ";
    cin >> desired_num;

    ans = essence_of_hacking(num_arr, n, desired_num);
    cout << "Ans: " << ans;

    return 0;
    
}

/**
 * 1. add all numbers (1 + 3 + 4 + 6 = 14)
 * 2. check match
 * 3. sum < desired_number (14 < 24)
 * 4. multiplication must at least one.
 * 
 * **/