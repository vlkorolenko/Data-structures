#include <iostream>
#include "DoubleLinkedlist.h"
#include "Singlelinkedlist.h"
#include "Stack.h"
#include "StackOfArray.h"
#include "Queue.h"
#include "QueueOfArrays.h"
#include "InputRestrictedQueue.h"
#include "InputRestrictedQueueArray.h"

void singleList() {
    try {
        SingleLinkedList<int> list;
        list.AddToBack(15);
        list.AddToBack(6);
        list.AddToBack(9);
        list.AddToBack(12);


        cout << "Added 4 elements to the end of list" << endl;
        cout << endl << list << endl;

        list.AddToBeginning(7);
        list.AddToBeginning(10);
        list.AddToBeginning(4);

        cout << "Added 3 element to the beginning" << endl;
        cout << endl << list << endl;

        list.AddAtIndex(2, 23);

        cout << "Added an element by index 2" << endl;
        cout << list << endl;

        cout << "Search 23 in list: " << list.Search(23) << endl << endl;

        cout << "Size of list: " << list.getSize() << endl << endl;

        cout << "Is empty: " << list.IsEmpty() << endl << endl;

        list.DeleteFromBeginning();

        cout << "Deleted  object from the beginning" << endl;
        cout << list << endl;

        list.DeleteFromEnd();

        cout << "Deleted  object from the end" << endl;
        cout << list << endl;

        list.DeleteAtIndex(4);

        cout << "Deleted an obj by index 4" << endl;
        cout << list << endl;

        cout << "Used operator with index 2" << endl;
        cout << list[2] << endl << endl;

        cout << "Used operator with index 100" << endl;
        cout << list[100] << endl;
    }
    catch (const out_of_range& e) {
        cerr << e.what() << endl;
    }

}
void doubleList() {
    try {
        DoubleLinkedList<int> list;
        list.AddToBack(15);
        list.AddToBack(6);
        list.AddToBack(9);
        list.AddToBack(12);


        cout << "Added 4 elements to the end of list" << endl;
        cout << endl << list << endl;

        list.AddToBeginning(7);
        list.AddToBeginning(10);
        list.AddToBeginning(4);

        cout << "Added 3 elements to the beginning" << endl;
        cout << endl << list << endl;


        list.AddAtIndex(2, 23);

        cout << "Added an element by index 2" << endl;
        cout << list << endl;

        cout << "Search 23 in list: " << list.Search(23) << endl << endl;

        cout << "Size of list: " << list.getSize() << endl << endl;

        cout << "Is empty: " << list.IsEmpty() << endl << endl;

        list.DeleteFromBeginning();

        cout << "Deleted  object from the beginning" << endl;
        cout << list << endl;

        list.DeleteFromEnd();

        cout << "Deleted  object from the end" << endl;
        cout << list << endl;

        list.DeleteAtIndex(4);

        cout << "Deleted an obj by index 4" << endl;
        cout << list << endl;

        cout << "Used operator with index 2" << endl;
        cout << list[2] << endl << endl;

        cout << "Used operator with index 100" << endl;
        cout << list[100] << endl;
    }
    catch (const out_of_range& e) {
        cerr << e.what() << endl;
    }
}
void stack() {
    try {
        Stack<int> list;
        cout << "Push: " << endl;
        list.Push(12);
        cout << list << endl;
        list.Push(7);
        cout << list << endl;
        list.Push(9);
        cout << list << endl;
        list.Push(15);
        cout << list << endl;
        list.Push(4);
        cout << list << endl;

        cout << "Pop: " << list.Pop() << "  " << list << endl;
        cout << "Peek: " << list.Peek() << "  " << list << endl;
        cout << "Pop: " << list.Pop() << "  " << list << endl;
        cout << "Peek: " << list.Peek() << "  " << list << endl;

        cout << "Is empty: " << list.IsEmpty() << endl;
        cout << "Size: " << list.getSize() << endl;

        cout << list << endl;
        cout << "Pop: " << list.Pop() << "  " << list << endl;
        cout << "Pop: " << list.Pop() << "  " << list << endl;
        cout << "Pop: " << list.Pop() << "  " << list << endl;
        cout << "Pop: " << list.Pop() << "  " << list << endl;

    }
    catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }
}
void stackOfArray() {
    try {
        StackOfArrays<int> list;
        cout << "Push: " << endl;
        list.Push(12);
        cout << list << endl;
        list.Push(7);
        cout << list << endl;
        list.Push(9);
        cout << list << endl;
        list.Push(15);
        cout << list << endl;
        list.Push(4);
        cout << list << endl;

        cout << "Pop: " << list.Pop() << "  " << list << endl;
        cout << "Peek: " << list.Peek() << "  " << list << endl;
        cout << "Pop: " << list.Pop() << "  " << list << endl;
        cout << "Peek: " << list.Peek() << "  " << list << endl;

        cout << "Is empty: " << list.isEmpty() << endl;
        cout << "Size: " << list.getSize() << endl;

        cout << list << endl;
        cout << "Pop: " << list.Pop() << "  " << list << endl;
        cout << "Pop: " << list.Pop() << "  " << list << endl;
        cout << "Pop: " << list.Pop() << "  " << list << endl;
        cout << "Pop: " << list.Pop() << "  " << list << endl;
    }
    catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }
}
void queue() {
    try {
        Queue<int> list;
        cout << "Is empty: " << list.IsEmpty() << endl;

        cout << "Enqueue:" << endl;
        list.Enqueue(4);
        list.Enqueue(7);
        list.Enqueue(12);
        cout << list << endl;

        cout << "Dequeue: " << list.Dequeue() << endl << list << endl;

        cout << "Peek: " << list.Peek() << endl << list << endl;

        cout << "Size: " << list.getSize() << endl;

        cout << "Is empty: " << list.IsEmpty() << endl;

        cout << "Dequeue: " << list.Dequeue() << endl << list << endl;
        cout << "Dequeue: " << list.Dequeue() << endl << list << endl;
        list.Dequeue();
    }
    catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }
}
void queueOfArray() {
    try {
        QueueOfArrays<int> list;
        cout << "Is empty: " << list.isEmpty() << endl;

        cout << "Is full: " << list.isFull() << endl;

        cout << "Enqueue:" << endl;
        list.Enqueue(4);
        list.Enqueue(7);
        list.Enqueue(12);
        cout << list << endl;

        cout << "Dequeue: " << list.Dequeue() << endl << list << endl;

        cout << "Peek: " << list.Peek() << endl << list << endl;

        cout << "Size: " << list.getSize() << endl;

        cout << "Is empty: " << list.isEmpty() << endl;

        cout << "Dequeue: " << list.Dequeue() << endl << list << endl;
        cout << "Dequeue: " << list.Dequeue() << endl << list << endl;
        list.Dequeue();

    }
    catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }
}
void inputRestrictedQueue() {
    try {
        InputRestrictedQueue<int> list;
        cout << "Enqueue: " << endl;
        list.Enqueue(12);
        list.Enqueue(5);
        list.Enqueue(8);
        list.Enqueue(15);
        list.Enqueue(3);

        cout << list << endl;

        cout << "Dequeue: " << list.Dequeue() << "  " << list << endl;
        cout << "Delete from end: " << list.DeleteFromEnd() << "  " << list << endl;

        cout << "Peek: " << list.Peek() << "  " << list << endl;
        cout << "Peek from end: " << list.PeekFromEnd() << "  " << list << endl;

        cout << "Is empty: " << list.IsEmpty() << endl;

        cout << "Size: " << list.getSize() << endl;

        cout << "Delete from end: " << list.DeleteFromEnd() << "  " << list << endl;
        cout << "Delete from end: " << list.DeleteFromEnd() << "  " << list << endl;
        cout << "Delete from end: " << list.DeleteFromEnd() << "  " << list << endl;
        cout << "Delete from end: " << list.DeleteFromEnd() << "  " << list << endl;
    }
    catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }
}
void inputRestrictedQueueArrays() {
    try {
        InputRestrictedQueueArrays<int> list;
        cout << "Enqueue: " << endl;
        list.Enqueue(12);
        list.Enqueue(5);
        list.Enqueue(8);
        list.Enqueue(15);
        list.Enqueue(3);

        cout << list << endl;

        cout << "Dequeue: " << list.Dequeue() << "  " << list << endl;
        cout << "Delete from end: " << list.DeleteFromEnd() << "  " << list << endl;

        cout << "Peek: " << list.Peek() << "  " << list << endl;
        cout << "Peek from end: " << list.PeekFromEnd() << "  " << list << endl;

        cout << "Is empty: " << list.isEmpty() << endl;

        cout << "Size: " << list.getSize() << endl;

        cout << "Delete from end: " << list.DeleteFromEnd() << "  " << list << endl;
        cout << "Delete from end: " << list.DeleteFromEnd() << "  " << list << endl;
        cout << "Delete from end: " << list.DeleteFromEnd() << "  " << list << endl;
        cout << "Delete from end: " << list.DeleteFromEnd() << "  " << list << endl;
    }
    catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }
}

int main()
{
    singleList();
    cout << "\n********************\n";
    doubleList();
    cout << "\n********************\n";
    stack();
    cout << "\n********************\n";
    stackOfArray();
    cout << "\n********************\n";
    queue();
    cout << "\n********************\n";
    queueOfArray();
    cout << "\n********************\n";
    inputRestrictedQueue();
    cout << "\n********************\n";
    inputRestrictedQueueArrays();
}