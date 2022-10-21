// 1. Write C++ code to implement Stack. You have to build the following functions
// and call them from the main method.

#include <iostream>

int stack[100], top = -1, maxSize = 100;

bool isEmpty()
{
    return (top < 0);
}

bool isFull()
{
    return (top >= maxSize - 1);
}

bool push(int Element)
{
    if (isFull())
    {
        std::cout << "Stack Overflow!" << std::endl;
        return false;
    }

    stack[++top] = Element;
    std::cout << "pushed: " << Element << std::endl;
    return true;
}

bool pop()
{
    if (isEmpty())
    {
        return false;
    }

    int item = stack[top--];
    std::cout << "popped: " << item << std::endl;

    return true;
}

void topElement()
{
    std::cout << stack[top] << std::endl;
}

void show()
{
    if (!isEmpty())
    {
        std::cout << "Stack:" << std::endl;
        for (int i = top; i >= 0; i--)
        {
            std::cout << stack[i] << std::endl;
        }
    }
    else
    {
        std::cout << "Empty Stack!" << std::endl;
    }
}

int main()
{
    std::cout << "is empty: " << isEmpty() << std::endl;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    pop();
    topElement();
    std::cout << "is full: " << isFull() << std::endl;

    show();

    return 0;
}