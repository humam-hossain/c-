// Using the given code for unsortedType.h and unsortedType.cpp:
// C++ program to combine the input 2 list sorted in ascending order into 1 list sorted in
// ascending order.
#include <iostream>
#include "unsortedtype.h"
using namespace std;

// template <class ItemType>
// class UnsortedType
// {
//     struct NodeType
//     {
//         ItemType info;
//         NodeType *next;
//     };

// public:
//     UnsortedType();
//     ~UnsortedType();
//     bool IsFull();
//     int LengthIs();
//     void MakeEmpty();
//     void RetrieveItem(ItemType &, bool &);
//     void InsertItem(ItemType);
//     void DeleteItem(ItemType);
//     void ResetList();
//     void GetNextItem(ItemType &);

// private:
//     NodeType *listData;
//     int length;
//     NodeType *currentPos;
// };

// template <class ItemType>
// UnsortedType<ItemType>::UnsortedType()
// {
//     length = 0;
//     listData = NULL;
//     currentPos = NULL;
// }
// template <class ItemType>
// int UnsortedType<ItemType>::LengthIs()
// {
//     return length;
// }
// template <class ItemType>
// bool UnsortedType<ItemType>::IsFull()
// {
//     NodeType *location;
//     try
//     {
//         location = new NodeType;
//         delete location;
//         return false;
//     }
//     catch (bad_alloc &exception)
//     {
//         return true;
//     }
// }
// template <class ItemType>
// void UnsortedType<ItemType>::InsertItem(ItemType item)
// {
//     NodeType *location;
//     location = new NodeType;
//     location->info = item;
//     location->next = listData;
//     listData = location;
//     length++;
// }
// template <class ItemType>
// void UnsortedType<ItemType>::DeleteItem(ItemType item)
// {
//     NodeType *location = listData;
//     NodeType *tempLocation;
//     if (item == listData->info)
//     {
//         tempLocation = location;
//         listData = listData->next;
//     }
//     else
//     {
//         while (!(item == (location->next)->info))
//             location = location->next;
//         tempLocation = location->next;
//         location->next = (location->next)->next;
//     }
//     delete tempLocation;
//     length--;
// }
// template <class ItemType>
// void UnsortedType<ItemType>::RetrieveItem(ItemType &item, bool &found)
// {
//     NodeType *location = listData;
//     bool moreToSearch = (location != NULL);
//     found = false;
//     while (moreToSearch && !found)
//     {
//         if (item == location->info)
//             found = true;
//         else
//         {
//             location = location->next;
//             moreToSearch = (location != NULL);
//         }
//     }
// }
// template <class ItemType>
// void UnsortedType<ItemType>::MakeEmpty()
// {
//     NodeType *tempPtr;
//     while (listData != NULL)
//     {
//         tempPtr = listData;
//         listData = listData->next;
//         delete tempPtr;
//     }
//     length = 0;
// }
// template <class ItemType>
// UnsortedType<ItemType>::~UnsortedType()
// {
//     MakeEmpty();
// }

// template <class ItemType>
// void UnsortedType<ItemType>::ResetList()
// {
//     currentPos = NULL;
// }
// template <class ItemType>
// void UnsortedType<ItemType>::GetNextItem(ItemType &item)
// {
//     if (currentPos == NULL)
//         currentPos = listData;
//     else
//         currentPos = currentPos->next;
//     item = currentPos->info;
// }

int main()
{
    // create 3 UnsortedType objects for the 2 input lists and 1 output list
    UnsortedType<int> list1, list2, result;
    int n, value;
    // read the number of integers for first sequence
    cin >> n;
    // loop to read n integers for first sequence and insert them into list1
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        list1.InsertItem(value);
    }
    // read the number of integers for second sequence
    cin >> n;
    // loop to read n integers for second sequence and insert them into list2
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        list2.InsertItem(value);
    }
    // after the insertion list1 and list2 will be sorted in descending order
    // reset the cursor of list1 and list2 to first item
    list1.ResetList();
    list2.ResetList();
    // set i and j to index of first value in list1 and list2
    int i = 0, j = 0, value1, value2;
    // get the first values for list1 and list2 into value1 and value2 respectively
    list1.GetNextItem(value1);
    list2.GetNextItem(value2);
    // loop that continues until we reach end of one of the lists
    while (i < list1.LengthIs() && j < list2.LengthIs())
    {
        if (value1 >= value2) // value of list1 >= value of list2
        {
            // insert value of list1 into result
            result.InsertItem(value1);
            i++;                      // increment i by 1
            if (i < list1.LengthIs()) // end of list1 has not been reached, get the next value of list1
                list1.GetNextItem(value1);
        }
        else
        {
            // insert value of list2 into result
            result.InsertItem(value2);
            j++;                      // increment j by 1
            if (j < list2.LengthIs()) // end of list2 has not been reached, get the next value of list2
                list2.GetNextItem(value2);
        }
    }
    // insert the remaining elements of list1 into result
    while (i < list1.LengthIs())
    {
        result.InsertItem(value1);
        i++;
        if (i < list1.LengthIs())
            list1.GetNextItem(value1);
    }
    // insert the remaining elements of list2 into result
    while (j < list2.LengthIs())
    {
        result.InsertItem(value2);
        j++;
        if (j < list2.LengthIs())
            list2.GetNextItem(value2);
    }
    // reset the result list
    result.ResetList();
    // loop to display the elements of result list
    for (i = 0; i < result.LengthIs(); i++)
    {
        result.GetNextItem(value);
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
// end of program