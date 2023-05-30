#include "HashTable.h"
#include <iostream>

int main() {
    HashTable hashTable(20);

    hashTable.insert(5);
    hashTable.insert(15);
    hashTable.insert(25);
    hashTable.insert(35);
    hashTable.insert(45);
    hashTable.insert(55);
    hashTable.insert(65);
    hashTable.insert(75);

    hashTable.print();

    int keyToSearch = 35;
    int searchIndex = hashTable.search(keyToSearch);
    if (searchIndex != -1) {
        std::cout << "Key " << keyToSearch << " found at index " << searchIndex << std::endl;
    }
    else {
        std::cout << "Key " << keyToSearch << " not found in hash table" << std::endl;
    }

    int keyToDelete = 15;
    hashTable.remove(keyToDelete);

    hashTable.print();

    HashTable* newHashTable = hashTable.rehash();
    std::cout << "Rehashed Hash Table:" << std::endl;
    newHashTable->print();

    delete newHashTable;

    return 0;
}
