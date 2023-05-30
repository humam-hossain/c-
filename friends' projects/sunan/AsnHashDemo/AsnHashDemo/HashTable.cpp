#include "HashTable.h"
#include <iostream>

#define EMPTY_CELL -2
#define DELETED_CELL -1

HashTable::HashTable(int maxSize) {
    this->table = new int[maxSize];
    this->maxSize = maxSize;
    this->currentSize = 0;

    // Initialize all cells with EMPTY_CELL
    for (int i = 0; i < maxSize; i++) {
        this->table[i] = EMPTY_CELL;
    }
}

HashTable::~HashTable() {
    delete[] this->table;
}

int HashTable::hashFunction(int key) const {
    return key % this->maxSize;
}

int HashTable::search(int key) const {
    int index = hashFunction(key);
    int i = 0;
    while (i < this->maxSize) {
        int probeIndex = (index + i) % this->maxSize;
        if (this->table[probeIndex] == key) {
            return probeIndex;
        }
        else if (this->table[probeIndex] == EMPTY_CELL) {
            return -1;  // Key not found
        }
        i++;
    }
    return -1;  // Key not found
}

void HashTable::insert(int key) {
    if (this->currentSize == this->maxSize) {
        std::cout << "Hash table is full, unable to insert key " << key << std::endl;
        return;
    }

    int index = hashFunction(key);
    int i = 0;
    while (i < this->maxSize) {
        int probeIndex = (index + i) % this->maxSize;
        if (this->table[probeIndex] == EMPTY_CELL || this->table[probeIndex] == DELETED_CELL) {
            this->table[probeIndex] = key;
            this->currentSize++;
            return;
        }
        i++;
    }
}

void HashTable::remove(int key) {
    int index = search(key);
    if (index != -1) {
        this->table[index] = DELETED_CELL;
        this->currentSize--;
        std::cout << "Key " << key << " deleted from the hash table" << std::endl;
    }
    else {
        std::cout << "Key " << key << " not found in the hash table" << std::endl;
    }
}

void HashTable::print() const {
    std::cout << "Hash Table:" << std::endl;
    for (int i = 0; i < this->maxSize; i++) {
        if (this->table[i] != EMPTY_CELL && this->table[i] != DELETED_CELL) {
            std::cout << "[" << i << "]: " << this->table[i] << std::endl;
        }
    }
}

HashTable* HashTable::rehash() const {
    HashTable* newHashTable = new HashTable(this->maxSize);
    for (int i = 0; i < this->maxSize; i++) {
        if (this->table[i] != EMPTY_CELL && this->table[i] != DELETED_CELL) {
            newHashTable->insert(this->table[i]);
        }
    }
    return newHashTable;
}
