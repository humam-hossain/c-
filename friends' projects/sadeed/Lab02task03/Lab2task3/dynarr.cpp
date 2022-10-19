#include "dynarr.h"
#include <iostream>
using namespace std;

dynArr::dynArr()
{
    data = NULL;
    size_r = 0, size_c = 0;
}
dynArr::dynArr(int r, int c)
{
    data = new int* [r];
    size_r = r;
    size_c = c;
    for( int i = 0; i < r; i++ ) {
        data[i] = new int[c];
    }
}
dynArr::~dynArr()
{
    delete [] data;
}
int dynArr::getValue(int r, int c)
{
    return data[r][c];
}
void dynArr::setValue(int r, int c, int value)
{
    data[r][c] = value;
}
