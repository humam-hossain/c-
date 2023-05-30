#ifndef LIST_H
#define LIST_H

struct Node {
    int value;
    Node* next;
};

class List {
private:
    Node* head;
    Node* tail;

public:
    List();
    ~List();

    bool IsEmpty() const;
    int LengthIs() const;
    void Print() const;
    void AddAsHead(int i);
    void AddAsTail(int i);
    Node* Find(int i) const;
    void Reverse();
    int PopHead();
    void RemoveFirst(int i);
    void RemoveAll(int i);
    void AddAll(const List& l);
};

#endif
