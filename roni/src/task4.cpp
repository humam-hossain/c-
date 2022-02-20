#include<iostream>
using namespace std;

int main()
{
int DATA[10];

int largestNumber, secondLargestNumber;

    cout << "Enter 10 numbers of array DATA" << endl;

for (int i = 0; i < 10; i++)
{
    cin >> DATA[i];
}

    largestNumber = DATA[1];

    secondLargestNumber = DATA[2];

if (largestNumber < secondLargestNumber){largestNumber = DATA[2];

    secondLargestNumber = DATA[1];}

for (int i = 2; i < 10; i++)

{if (DATA[i]>largestNumber)

    {secondLargestNumber = largestNumber;largestNumber = DATA[i];}

else if (DATA[i]>secondLargestNumber)

    {secondLargestNumber = DATA[i];}
}
     cout << "Largest Number with location   :"<<largestNumber<< endl;

     cout << "Second Largest Number location     :" << secondLargestNumber<< endl;

return 0;

}