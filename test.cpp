#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char* buffer = new char[8];
    memset(buffer, 0, 8);

    cout << "Hello World";
    
    return 0;
}