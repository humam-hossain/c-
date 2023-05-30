#include "List.h"
#include <iostream>

List::List() {
    head = nullptr;
    tail = nullptr;
}

List::~List() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

bool List::IsEmpty() const {
    return head == nullptr;
}

int List::LengthIs() const {
    int length = 0;
    Node* current = head;
    while (current != nullptr) {
        length++;
        current = current->next;
    }
    return length;
}

void List::Print() const {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void List::AddAsHead(int i) {
    Node* newNode = new Node;
    newNode->value = i;
    newNode->next = head;
    head = newNode;
    if (tail == nullptr) {
        tail = newNode;
    }
}

void List::AddAsTail(int i) {
    Node* newNode = new Node;
    newNode->value = i;
    newNode->next = nullptr;
    if (tail != nullptr) {
        tail->next = newNode;
    }
    else {
        head = newNode;
    }
    tail = newNode;
}

Node* List::Find(int i) const {
    Node* current = head;
    while (current != nullptr) {
        if (current->value == i) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

void List::Reverse() {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    tail = head;
    head = prev;
}

int List::PopHead() {
    if (head == nullptr) {
        return NULL;
    }
    int value = head->value;
    Node* temp = head;
    head = head->next;
    if (head == nullptr) {
        tail = nullptr;
    }
    delete temp;
    return value;
}

void List::RemoveFirst(int i) {
    Node* prev = nullptr;
    Node* current = head;
    while (current != nullptr) {
        if (current->value == i) {
            if (prev != nullptr) {
                prev->next = current->next;
            }
            else {
                head = current->next;
            }
            if (current == tail) {
                tail = prev;
            }
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
}

void List::RemoveAll(int i) {
    Node* prev = nullptr;
    Node* current = head;
    while (current != nullptr) {
        if (current->value == i) {
            Node* next = current->next;
            if (prev != nullptr) {
                prev->next = next;
            }
            else {
                head = next;
            }
            if (current == tail) {
                tail = prev;
            }
            delete current;
            current = next;
        }
        else {
            prev = current;
            current = current->next;
        }
    }
}

void List::AddAll(const List& l) {
    if (l.head == nullptr) {
        return;
    }
    if (head == nullptr) {
        head = l.head;
        tail = l.tail;
    }
    else {
        tail->next = l.head;
        tail = l.tail;
    }
}
