#include <iostream>
using namespace std;
#include "dynArr.h"

dynArr::dynArr()
{
    data = NULL;
    rows = 0;
    cols = 0;
}

dynArr::dynArr(int rows, int cols)
{
    this->rows = rows;
    this->cols = cols;

    data = new int *[rows];

    for (int i = 0; i < rows; i++)
        data[i] = new int[cols];
}

dynArr::~dynArr()
{
    for (int i = 0; i < rows; i++)
    {
        delete[] data[i];
    }
    delete[] data;
}
void dynArr::setValue(int value, int row, int col)
{
    data[row][col] = value;
}
int dynArr::getValue(int row, int col)
{
    return data[row][col];
}

/* int main()
{
int rows, cols, value;
cout << "Enter no of rows :";
cin >> rows;
cout << "Enter no of cols :";
cin >> cols;
dynArr  da( rows,  cols);
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
cout << "Enter element of [" << i << "," << j << "] :";
cin >> value;
da.setValue(value, i, j);
}
}
cout << "\nDisplaying the 2-D array :" << endl;
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
cout << setw(4) << left << da.getValue(i, j);
}
cout << endl;
}
return 0;
}  */
