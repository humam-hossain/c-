// 3. Write C++ code to implement Queue using object orientation. You have to
// build the following methods.

#include <iostream>

#define MAX_SIZE 100

class Queue
{
    int queue[MAX_SIZE], front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty();
    bool isFull();
    bool enQueue(int Element);
    bool deQueue();
    void frontElement();
    void show();
};

bool Queue::isEmpty()
{
    if (this->front == -1)
        return true;
    return false;
}

bool Queue::isFull()
{
    if (this->front == 0 && this->rear == MAX_SIZE - 1)
        return true;
    return false;
}

bool Queue::enQueue(int Element)
{
    if (this->isFull())
    {
        std::cout << "Queue is full!" << std::endl;
        return false;
    }

    if (this->front == -1)
        this->front = 0;

    this->queue[++this->rear] = Element;

    std::cout << "enQueued => " << Element << std::endl;
}

bool Queue::deQueue()
{
    if (this->isEmpty())
    {
        std::cout << "Queue is Empty!" << std::endl;
        return false;
    }

    int Element = this->queue[this->front];

    if (this->front >= this->rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }

    std::cout << "deQueued => " << Element << std::endl;
    return true;
}

void Queue::frontElement()
{
    std::cout << this->queue[this->front] << std::endl;
}

void Queue::show()
{
    if (this->isEmpty())
    {
        std::cout << "Queue is empty!" << std::endl;
    }
    else
    {
        std::cout << std::endl
                  << "font = " << this->front << std::endl;
        std::cout << "Queue elements: ";

        for (int i = front; i <= rear; i++)
        {
            std::cout << this->queue[i] << "\t";
        }
        std::cout << std::endl
                  << "rear = " << this->rear << std::endl;
    }
}

int main()
{
    Queue queue;

    std::cout << "is empty => " << queue.isEmpty() << std::endl;

    queue.enQueue(10);
    queue.enQueue(20);
    queue.enQueue(30);
    queue.enQueue(40);
    queue.enQueue(60);

    queue.deQueue();
    queue.deQueue();

    queue.frontElement();

    std::cout << "is full => " << queue.isFull() << std::endl;

    queue.show();

    return 0;
}