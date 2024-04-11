#include <iostream>
#include "DoubleLinkedlist.h"
#include "Singlelinkedlist.h"

void exampleSingleList()
{

    try {
        SingleLinkedList<int> list;
        list.AddToBack(7);
        list.AddToBack(16);
        list.AddToBack(22);
        list.AddToBack(13);
        list.AddToBack(24);
        list.AddToBack(1);

        cout << "Added six elements to the end of list" << endl;
        cout << endl << list << endl;

        list.AddToBeginning(16);

        cout << "Added an element to the beginning" << endl;
        cout << endl << list << endl;


        list.AddAtIndex(2, 12);

        cout << "Added an element by index 2" << endl;
        cout << list << endl;

        cout << "Search 12 in list: " << list.Search(12) << endl << endl;

        cout << "Size of list: " << list.getSize() << endl << endl;

        cout << "IS empty: " << list.IsEmpty() << endl << endl;

        list.DeleteFromBeginning();

        cout << "Deleted an object from the beginning" << endl;
        cout << list << endl;

        list.DeleteFromEnd();

        cout << "Deleted an object from the end" << endl;
        cout << list << endl;

        list.DeleteAtIndex(4);

        cout << "deleted an object by index 4" << endl;
        cout << list << endl;

        cout << "used operator[] with index 2" << endl;
        cout << list[2] << endl << endl;

        cout << "used operator[] with index 100" << endl;
        cout << list[100] << endl;
    }
    catch (const out_of_range& e)
    {
        cerr << e.what() << endl;
    }
}

void exampleDoubleList()
{
    try {
        DoubleLinkedList<int> list;
        list.AddToBack(2);
        list.AddToBack(12);
        list.AddToBack(21);
        list.AddToBack(15);
        list.AddToBack(19);
        list.AddToBack(3);

        cout << "Added six elements to the emd of list" << endl;
        cout << endl << list << endl;

        list.AddToBeginning(12);

        cout << "added an element to the beginning" << endl;
        cout << endl << list << endl;


        list.AddAtIndex(5, 11);

        cout << "added an element by index 5" << endl;
        cout << list << endl;

        cout << "Search 123 in list: " << list.Search(11) << endl << endl;

        cout << "Size of list: " << list.getSize() << endl << endl;

        cout << "IS empty: " << list.IsEmpty() << endl << endl;

        list.DeleteFromBeginning();

        cout << "Deleted an object from the beginning" << endl;
        cout << list << endl;

        list.DeleteFromEnd();

        cout << "Deleted an object from the end" << endl;
        cout << list << endl;

        list.DeleteAtIndex(2);

        cout << "Deleted an object by index 2" << endl;
        cout << list << endl;

        cout << "Used operator[] with index 3" << endl;
        cout << list[3] << endl << endl;

        cout << "Used operator[] with index 98" << endl;
        cout << list[98] << endl;
    }
    catch (const out_of_range& e)
    {
        cerr << e.what() << endl;
    }
}


int main()
{
    exampleSingleList();
    exampleDoubleList();
}