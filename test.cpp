/* strcpy example */
// #include <stdio.h>
#include <iostream>
#include <string.h>

int main ()
{
  int x = 3, y = 3;

  switch(x+3){
    case 6: y=1;
    case 7: y = 2;
    default: y+=1;
  }

  std::cout << y;
}