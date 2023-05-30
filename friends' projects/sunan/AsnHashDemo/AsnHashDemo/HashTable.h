#ifndef HASHTABLE_H
#define HASHTABLE_H

class HashTable {
private:
    int* table;
    int maxSize;
    int currentSize;

    int hashFunction(int key) const;

public:
    HashTable(int maxSize);
    ~HashTable();

    int search(int key) const;
    void insert(int key);
    void remove(int key);
    void print() const;
    HashTable* rehash() const;
};

#endif
