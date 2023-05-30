#include "List.h"
#include <iostream>

int main() {
    List list;
    std::cout << "IsEmpty: " << (list.IsEmpty() ? "true" : "false") << std::endl;
    std::cout << "Length: " << list.LengthIs() << std::endl;

    list.AddAsHead(10);
    list.AddAsHead(20);
    list.AddAsTail(30);
    list.AddAsTail(40);
    list.AddAsHead(50);

    list.Print();
    std::cout << "Length: " << list.LengthIs() << std::endl;

    int valueToFind = 30;
    Node* foundNode = list.Find(valueToFind);
    if (foundNode != nullptr) {
        std::cout << "Node " << valueToFind << " found." << std::endl;
    }
    else {
        std::cout << "Node " << valueToFind << " not found." << std::endl;
    }

    list.Reverse();
    list.Print();

    int poppedValue = list.PopHead();
    std::cout << "Popped value: " << poppedValue << std::endl;
    list.Print();

    int valueToRemove = 30;
    list.RemoveFirst(valueToRemove);
    list.Print();

    list.RemoveAll(20);
    list.Print();

    List otherList;
    otherList.AddAsHead(60);
    otherList.AddAsTail(70);
    otherList.AddAsTail(80);

    list.AddAll(otherList);
    list.Print();

    return 0;
}
