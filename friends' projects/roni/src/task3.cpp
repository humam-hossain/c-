#include<iostream>
using namespace std;
int main()
{
   int n,a[n];

   cout <<"Enter the size of the array: ";
   cin >>n;

   cout<< " Enter array elements:";
   for(int i=0; i<n; i++)
   {
      cin>>a[i];
   }

   cout<<"Even numbers in the array are:\n";
   for(int i=0; i<n; i++)
   {
     if(a[i]%2==0)
     cout<< a[i];
   }

   cout<<"\nOdd numbers in the array are:\n ";
   for(int i=0; i<n; i++)
   {
     if(a[i]%2!=0)
     cout<< a[i];
   }

   return 0;
}