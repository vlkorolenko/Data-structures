#pragma once
#include "QueueNode.h"
#include <iostream>
using namespace std;
using namespace queuenode;

template<typename T>
class InputRestrictedQueue
{
private:
    shared_ptr<QueueNode<T>> head;
    shared_ptr<QueueNode<T>> tail;
    int size;

public:
    void Enqueue(T data)
    {
        shared_ptr<QueueNode<T>> newNode = make_shared<QueueNode<T>>(data);
        if (!tail)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->previous = tail;
            tail = newNode;
        }
        size++;
    }

    T Dequeue()
    {
        if (!head)
        {
            throw runtime_error("\nQueue is empty");
        }

        T temp = head->data;
        if (head == tail)
        {
            head = tail = nullptr;
        }
        else
        {
            head = head->next;
            head->previous.reset();
        }
        size--;
        return temp;
    }
    T DeleteFromEnd()
    {
        if (!tail)
        {
            throw runtime_error("\nQueue is empty");;
        }

        T temp = tail->data;
        if (head == tail)
        {
            head = tail = nullptr;
        }
        else
        {
            tail = tail->previous.lock();
            tail->next = nullptr;
        }
        size--;
        return temp;
    }

    T Peek()
    {
        if (!head)
        {
            throw runtime_error("\nQueue is empty");
        }
        return head->data;
    }
    T PeekFromEnd()
    {
        if (!tail)
        {
            throw runtime_error("\nQueue is empty");
        }
        return tail->data;
    }

    bool IsEmpty()
    {
        if (size == 0)
        {
            return true;
        }
        return false;
    }

    int getSize() const
    {
        return size;
    }

    friend ostream& operator<<(ostream& os, InputRestrictedQueue& obj)
    {
        os << "\nQueue data: ";
        shared_ptr<QueueNode<T>> current = obj.head;
        while (current)
        {
            os << current->data << " ";
            current = current->next;
        }
        os << endl;
        return os;
    }

    InputRestrictedQueue() : head{ nullptr }, tail{ nullptr }, size{ 0 } {};
    InputRestrictedQueue(T data) : head{ make_shared<QueueNode<T>>(data) }, tail{ head }, size{ 1 } {};
    ~InputRestrictedQueue() {};
};