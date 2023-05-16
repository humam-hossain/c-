#include <iostream>
#include "unsortedtype.cpp"

void isFound(bool found) {
	if (found) {
		std::cout << "Item is found\n";
	}
	else {
		std::cout << "Item is not found\n";
	}
}

void printIsFull(bool isFull) {
	if (isFull) {
		std::cout << "List is full\n";
	}
	else {
		std::cout << "List is not full\n";
	}
}
int main()
{
	// create a list of integers
	UnsortedType<int> intList;
	int item;

	// insert four items
	for (int i = 0; i < 4; i++) {
		std::cin >> item;

		intList.InsertItem(item);
	}

	// print the list
	intList.ResetList();
	for (int i = 0; i < intList.LengthIs(); i++) {
		intList.GetNextItem(item);

		std::cout << item << " ";
	}
	std::cout << "\n";

	// print the length of the list
	std::cout << intList.LengthIs() << "\n";

	// insert one item
	std::cin >> item;
	intList.InsertItem(item);

	// print the list
	intList.ResetList();
	for (int i = 0; i < intList.LengthIs(); i++) {
		intList.GetNextItem(item);

		std::cout << item << " ";
	}
	std::cout << "\n";
	
	bool found;

	// Retrieve 4 and print whether found or not
	item = 4;
	intList.RetrieveItem(item, found);
	isFound(found);
	
	// Retrieve 5 and print whether found or not
	item = 5;
	intList.RetrieveItem(item, found);
	isFound(found);
	
	// Retrieve 9 and print whether found or not
	item = 9;
	intList.RetrieveItem(item, found);
	isFound(found);
	
	// Retrieve 10 and print whether found or not
	item = 10;
	intList.RetrieveItem(item, found);
	isFound(found);

	// print if the list is full or not
	printIsFull(intList.IsFull());

	// delete 5
	intList.DeleteItem(5);

	// print if the list is full or not
	printIsFull(intList.IsFull());

	// delete 1
	intList.DeleteItem(1);

	// print the list
	intList.ResetList();
	for (int i = 0; i < intList.LengthIs(); i++) {
		intList.GetNextItem(item);

		std::cout << item << " ";
	}
	std::cout << "\n";

	// delete 6
	intList.DeleteItem(6);
	
	// print the list
	intList.ResetList();
	for (int i = 0; i < intList.LengthIs(); i++) {
		intList.GetNextItem(item);

		std::cout << item << " ";
	}
	std::cout << "\n";

	return 0;
}