#pragma once

template <typename T>

class SingleLinkedList
{

private:
    typedef class Node
    {

    public:
        T data;
        Node *next;

        Node() {}
        Node(T value)
        {
            data = value;
            next = NULL;
        }

    } *nodePointer;

    nodePointer head = NULL;

    nodePointer curr = NULL;

public:
    nodePointer createNode(T);
    void insertNelements(T);
    void insertAtLast(T);
    void insertAtFirst(T);
    void insertBeforeElement(T, T);
    void insertAfter(T, T);
    void deleteFirst();
    void deletLast();
    void deleteElementByValue(T);
    void display();
};

// Double Link List Class

class DoubleLinkedList
{
private:
    typedef class List
    {
    public:
        int a;
        List *prev, *next;
    } *nodeptr;

public:
    nodeptr head = NULL, tail = NULL;
    nodeptr ptr;

public:
    void createList(int);
    void printFromFirst(nodeptr);
    void printFromLast(nodeptr);
    void insertFirst(int);
    void insurtdatamiddle(int);
    void insertLast(int);
    void deletion1st();
    void deleteLastnode();
    void deleteMiddle();
};

// Demo for Stack

class Stack
{
private:
    int *datas;
    int maxSize = 0;
    int top = 0;

public:
    Stack(int);
    bool isFull();
    bool isEmpty();
    void push(int);
    int topElement();
    void pop();
    void Top();
    void show();
};

// Demo For Queue
#define SIZE 5
class Queue
{

private:
    int items[SIZE], front, rear;

public:
    Queue();
    bool isFull();
    bool isEmpty();
    void enQueue(int);
    int deQueue();
    void display();
};

// BST Function

class BST
{

    typedef class tree
    {
    public:
        int data;
        tree *left, *right;
    } *node;

public:
    node root, ptr;

public:
    void makeRoot(int);
    void insertIntoBST(int);
    void displayInorder(node);
    void displayPreorder(node);
    void displayPostorder(node);
    void insertNode(int);
    void searchInBST(int);
};