#include <iostream>

using namespace std;

int main()

{
    int array[100], i, n;

    cout << "Enter number of elements in the array: ";

    cin >> n;

    cout << "\nEnter array: ";

    for (i = 0; i < n; i++)

    cin >> array[i];

    cout << "Smallest number is:  " << array[0] << "\nSecond smallest number is " << array[1] << endl;

    return 0;

}