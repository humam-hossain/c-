#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

#define array1_size 200000
#define array2_size 100000
#define array3_size 10000
#define array4_size 5000

using namespace std;

void insertionSort(int array[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;

        // Compare key with each element on the left of it until an element smaller than
        // it is found.
        // For descending order, change key<array[j] to key>array[j].
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

string print(int *p, int n)
{
    string result = "";
    for (int i = 0; i < n; i++)
    {
        result += to_string(*(p + i)) + "\t";

        if ((i + 1) % 20 == 0)
            result += "\n";
    }

    return result;
}

string check(int *array, int n)
{
    string result = "";

    clock_t start, end;
    // time(&start);
    start = clock();
    // ios_base::sync_with_stdio(false);

    insertionSort(array, n);

    // time(&end);
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken => " << time_taken << " sec" << endl;

    result += "Time taken => " + to_string(time_taken) + " sec \n\n\n";
    result += print(array, n);

    return result;
}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    int array1[array1_size], array2[array2_size], array3[array3_size], array4[array4_size];

    for (int i = 0; i < array1_size; i++)
    {
        array1[i] = rand();
    }
    for (int i = 0; i < array2_size; i++)
    {
        array2[i] = rand();
    }
    for (int i = 0; i < array3_size; i++)
    {
        array3[i] = rand();
    }
    for (int i = 0; i < array4_size; i++)
    {
        array4[i] = rand();
    }

    int n;

    n = sizeof(array1) / sizeof(array1[0]);
    ofstream file1("../data/array1_insertionSort.txt");
    file1 << check(array1, n);
    file1.close();

    n = sizeof(array2) / sizeof(array2[0]);
    ofstream file2("../data/array2_insertionSort.txt");
    file2 << check(array2, n);
    file2.close();

    n = sizeof(array3) / sizeof(array3[0]);
    ofstream file3("../data/array3_insertionSort.txt");
    file3 << check(array3, n);
    file3.close();

    n = sizeof(array4) / sizeof(array4[0]);
    ofstream file4("../data/array4_insertionSort.txt");
    file4 << check(array4, n);
    file4.close();

    return 0;
}
