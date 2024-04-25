#pragma once
#define SIZE 10
#include <iostream>

using namespace std;
template<typename T>
class StackOfArrays
{
private:
    T items[SIZE];
    int top;

public:
    bool isFull()
    {
        if (top == SIZE - 1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }

    void Push(T data)
    {
        if (isFull())
        {
            throw runtime_error("\nStack is Full!");
        }
        items[++top] = data;
    }

    T Pop()
    {
        if (isEmpty())
        {
            throw runtime_error("\nStack is Empty");
        }
        T temp = items[top];

        T temp_mas[SIZE];

        for (int i = 0; i < top; i++)
        {
            temp_mas[i] = items[i];
        }

        for (int i = 0; i < size(temp_mas); i++)
        {
            items[i] = temp_mas[i];
        }

        top--;
        return  temp;
    }

    T Peek()
    {
        if (isEmpty())
        {
            throw runtime_error("\nStack is Empty");
        }
        return items[top];
    }

    int getSize()
    {
        return top + 1;
    }

    friend ostream& operator<<(ostream& os, StackOfArrays<T>& obj) {
        if (obj.isEmpty())
        {
            os << "\nStack is Empty";
        }
        else
        {
            os << "\nStack data: ";
            for (int i = obj.top; i >= 0; i--) {
                os << obj.items[i];
                os << " ";
            }
            os << endl;
        }
        return os;
    }

    StackOfArrays() :top{ -1 } {};
    StackOfArrays(T data) :top{ 0 } { items[top] = data; };
    ~StackOfArrays() {};
};