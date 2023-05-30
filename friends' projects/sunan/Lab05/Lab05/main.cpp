#include "sortedtype.cpp"
#include <iostream>

// Write a class timeStamp that represents a time of the day.It must have variables to store the number of seconds, minutes and hours passed.
// It also must have a function to print all the values.You will also need to overload a few operators.
class timeStamp
{
public:
    timeStamp(int sec = 0, int min = 0, int hr = 0) 
    {
        this->sec = sec;
        this->min = min;
        this->hr = hr;
    }

    void printTime()
    {
        std::cout << sec << ":" << min << ":" << hr << std::endl;
    }

    bool operator > (timeStamp& other) {
        if (this->hr > other.hr) {
            return true;
        }
        else if (this->hr < other.hr) {
            return false;
        }
        
        // hours are equal
        if (this->min > other.min) {
            return true;
        }
        else if (this->min < other.min) {
            return false;
        }

        // minutes are equal
        if (this->sec > other.sec) {
            return true;
        }

        // seconds are equal, so they are not greater than each other
        return false;
    }

    bool operator < (timeStamp& other) {
        if (this->hr < other.hr) {
            return true;
        }
        else if (this->hr > other.hr) {
            return false;
        }
        
        // hours are equal
        if (this->min < other.min) {
            return true;
        }
        else if (this->min > other.min) {
            return false;
        }

        // minutes are equal
        if (this->sec < other.sec) {
            return true;
        }

        // seconds are equal, so they are not kess than each other
        return false;
    }

    bool operator != (const timeStamp& other) {
        return (this->hr != other.hr || this->min != other.min || this->sec != other.sec);
    }

private:
    int sec, min, hr;
};

void printList(SortedType<int> intList)
{
    intList.ResetList();
    for (int i = 0; i < intList.LengthIs(); i++) {
        int item;
        intList.GetNextItem(item);

        std::cout << item << " ";
    }

    std::cout << "\n";
}

int main()
{
    int item;
    bool found;

    // create a list of integers
    SortedType<int> intList;
    
    // print length of the list
    std::cout << intList.LengthIs() << "\n";

    // insert five items
    for (int i = 0; i < 5; i++) {
        int temp;

        std::cin >> temp;
        intList.InsertItem(temp);
    }

    // print the list
    printList(intList);
    
    // Retrieve 6 and print whether found Item is not found
    item = 6;
    intList.RetrieveItem(item, found);
    
    if (found) {
        std::cout << "Item is found\n";
    }
    else {
        std::cout << "Item is not found\n";
    }

    // Retrieve 5 and print whether found Item is found
    item = 5;
    intList.RetrieveItem(item, found);

    if (found) {
        std::cout << "Item is found\n";
    }
    else {
        std::cout << "Item is not found\n";
    }

    // Print if the list is full or not List is full
    if (intList.IsFull() == true) {
        std::cout << "List is full\n";
    }
    else {
        std::cout << "List is not full\n";
    }

    // Delete 1
    item = 1;
    intList.DeleteItem(item);
    // Print the list 2 4 5 7
    printList(intList);

    // Print if the list is full or not List is not full
    if (intList.IsFull() == true) {
        std::cout << "List is full\n";
    }
    else {
        std::cout << "List is not full\n";
    }

    // Create a list of objects of class timeStamp.
    int sec, min, hr;
    SortedType<timeStamp> times;

    // Insert 5 time values in the format ssmmhh 
        // 15 34 23
        // 13 13 02
        // 43 45 12
        // 25 36 17
        // 52 02 20
    for (int i = 0; i < 5; i++) {
        std::cin >> sec;
        std::cin >> min;
        std::cin >> hr;

        timeStamp time(sec, min, hr);
        times.InsertItem(time);
    }
    // Delete the timestamp (25, 36, 17)
    timeStamp time(25, 36, 17);
    times.DeleteItem(time);

    // Print the list
    times.ResetList();
    for (int i = 0; i < times.LengthIs(); i++) {
        timeStamp time;
        times.GetNextItem(time);
    
        time.printTime();
    }
    
    std::cout << "\n";


    return 0;
}
