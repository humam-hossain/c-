#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    int row, col;

    std::cin >> row >> col;

    dynArr ara(row, col);

    for( int i = 0; i < row; i++ ) {
        for( int j = 0; j < col; j++ ) {
            int x;
            std::cin >> x;
            ara.setValue(i, j, x);
        }
    }

    std::cout << "the array" << "\n";

    for( int i = 0; i < row; i++ ) {
        for( int j = 0; j < col; j++ ) {
            std::cout << ara.getValue(i, j) << ' ';
        }
        std::cout << endl;
    }


    return 0;
}
