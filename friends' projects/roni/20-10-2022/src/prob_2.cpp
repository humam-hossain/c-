// 1. Write C++ code to implement Stack. You have to build the following functions
// and call them from the main method.

#include <iostream>

class MyStack
{
    int Stack[100], Top, MaxSize;

public:
    MyStack(int Size = 100)
    {
        MaxSize = Size;
        Top = 0;
    }
    bool isEmpty();
    bool isFull();
    bool push(int Element);
    bool pop();
    int topElement();
    void show();
};

bool MyStack::isEmpty()
{
    return (this->Top <= 0);
}

bool MyStack::isFull()
{
    return (this->Top >= MaxSize);
}

bool MyStack::push(int Element)
{
    if (this->isFull())
    {
        std::cout << "Stack Overflow!" << std::endl;
        return false;
    }

    this->Stack[this->Top++] = Element;
    std::cout << "pushed: " << Element << std::endl;
    return true;
}

bool MyStack::pop()
{
    if (isEmpty())
    {
        return false;
    }

    int item = this->Stack[--this->Top];
    std::cout << "popped: " << item << std::endl;

    return true;
}

int MyStack::topElement()
{
    return this->Stack[this->Top - 1];
}

void MyStack::show()
{
    if (!isEmpty())
    {
        std::cout << "Stack:" << std::endl;
        for (int i = this->Top - 1; i >= 0; i--)
        {
            std::cout << this->Stack[i] << std::endl;
        }
    }
    else
    {
        std::cout << "Empty Stack!" << std::endl;
    }
}

int main()
{
    MyStack stack;

    std::cout << "is empty: " << stack.isEmpty() << std::endl;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    stack.pop();
    std::cout << "top element: " << stack.topElement() << std::endl;
    std::cout << "is full: " << stack.isFull() << std::endl;

    stack.show();

    return 0;
}