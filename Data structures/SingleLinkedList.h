#include "SingleNode.h"
#include <iostream>

using namespace std;
using namespace singlenode;
template<typename T>

class SingleLinkedList
{
private:
    unique_ptr<SingleNode<T>> head;     // Унікальний вказівник на початок списку.
    int size;

    // Приватний метод для перевірки індексу на валідність.
    void CheckIndex(int index) const
    {
        if (index < 0 || index >= size)
        {
            throw out_of_range("Index out of range");
        }
    }

public:
    // Метод для додавання елемента в кінець списку.
    void AddToBack(T data)
    {
        unique_ptr<SingleNode<T>> newNode = make_unique<SingleNode<T>>(data);
        SingleNode<T>* current = head.get();    // Отримання вказівника на поточний вузол.

        // Якщо список порожній, то новий елемент стає головним.
        if (!current)
        {
            head = move(newNode);
            size++;
            return;
        }

        // Якщо список не порожній, то додаємо елемент в кінець.
        while (current->next)
        {
            current = current->next.get();
        }
        current->next = move(newNode);
        size++;
    }

    // Метод для додавання елемента в початок списку.
    void AddToBeginning(T data)
    {
        unique_ptr<SingleNode<T>> newNode = make_unique<SingleNode<T>>(data);   // Створення нового вузла
        newNode->next = move(head);     // Перенесення поточного головного вузла на місце наступного для нового вузла
        head = move(newNode);   // Робимо новий вузол головним
        size++;
    }

    //// Метод для додавання елемента за вказаним індексом.
    //void AddAtIndex(int index, int data)
    //{
    //    CheckIndex(index);

    //    // Якщо індекс дорівнює 0, додаємо елемент в початок.
    //    if (index == 0)
    //    {
    //        AddToBeginning(data);
    //        return;

    //    }

    //    // Якщо індекс дорівнює розміру списку, додаємо елемент в кінець.
    //    else if (index == size)
    //    {
    //        AddToBack(data);
    //        return;
    //    }

    //    // Додавання елемента в середину списку.
    //    else
    //    {
    //        unique_ptr<SingleNode<T>> newNode = make_unique<SingleNode<T>>(data);
    //        SingleNode<T>* current = head.get();

    //        // Пошук місця для вставки елемента.
    //        for (int i = 0; i < index - 1; i++)
    //        {
    //            current = current->next.get();
    //        }
    //        // Вставка нового елемента.
    //        newNode->next = move(current->next);
    //        current->next = move(newNode);
    //        size++;
    //    }
    //}

    //// Метод для видалення першого елемента списку.
    //void DeleteFromBeginning()
    //{
    //    if (!head)
    //    {
    //        throw out_of_range("List is empty!");
    //    }
    //    head = move(head->next);    // Переміщення наступного вузла на місце головного.
    //    --size;
    //}

    //// Метод для видалення останнього елемента списку.
    //void DeleteFromEnd()
    //{
    //    if (!head)
    //    {
    //        throw out_of_range("List is empty!");
    //    }

    //    // Якщо список містить лише один елемент, просто очищаємо head.
    //    if (size == 1)
    //    {
    //        head.reset();
    //        --size;
    //        return;
    //    }
    //    SingleNode<T>* current = head.get();    // Отримання вказівника на початок списку.

    //    // Переміщення вказівника на передостанній елемент.
    //    while (current->next->next)
    //    {
    //        current = current->next.get();
    //    }
    //    current->next.reset();                  // Очищення вказівника на наступний елемент.
    //    --size;
    //}

    //// Метод для видалення елемента за вказаним індексом.
    //void DeleteAtIndex(int index)
    //{
    //    CheckIndex(index);      // Перевірка валідності індексу.

    //    // Якщо індекс дорівнює 0, видаляємо перший елемент.
    //    if (index == 0)
    //    {
    //        DeleteFromBeginning();

    //    }

    //    // Якщо індекс дорівнює розміру списку - 1, видаляємо останній елемент.
    //    else if (index == size - 1)
    //    {
    //        DeleteFromEnd();
    //    }

    //    // Видалення елемента з середини списку.
    //    else
    //    {
    //        SingleNode<T>* current = head.get();

    //        // Пошук елемента, який потрібно видалити.
    //        for (int i = 0; i < index - 1; i++)
    //        {
    //            current = current->next.get();
    //        }
    //        // Видалення елемента.
    //        current->next = move(current->next->next);
    //        --size;
    //    }
    //}

    //// Оператор індексації для звернення до елементів списку за індексом.
    //T& operator[](const int index) const
    //{
    //    CheckIndex(index);
    //    SingleNode<T>* current = head.get();

    //    // Переміщення вказівника на потрібний елемент за допомогою індексу.
    //    for (int i = 0; i < index; i++)
    //    {
    //        current = current->next.get();
    //    }
    //    return current->data;       // Повертаємо дані потрібного елемента.
    //}

    //// Метод для перевірки, чи є список порожнім.
    //bool IsEmpty()
    //{
    //    if (size == 0)
    //    {
    //        return true;
    //    }
    //    return false;
    //}

    //// Метод для отримання розміру списку.
    //int getSize() const
    //{
    //    return size;
    //}

    //// Дружня функція для перевантаження оператора виводу для зручного виводу списку.
    //friend ostream& operator<<(ostream& os, SinglyLinkedList& obj)
    //{
    //    SingleNode<T>* current = obj.head.get();
    //    os << "List data: " << endl;
    //    while (current != nullptr)
    //    {
    //        os << current->data << " ";
    //        current = current->next.get();
    //    }
    //    os << endl;
    //    return os;
    //}

    //// Метод для пошуку елемента у списку.
    //bool Search(T data) const
    //{
    //    SingleNode<T>* current = head.get();
    //    while (current)
    //    {
    //        if (current->data == data)
    //        {
    //            return true;
    //        }
    //        current = current->next.get();
    //    }
    //    return false;
    //}

    SingleLinkedList() : head{ nullptr }, size{ 0 } {};
    SingleLinkedList(int value) : head{ make_unique<SingleNode<T>>(value) }, size{ 1 } {};      // Конструктор, який ініціалізує список одним елементом.

    ~SingleLinkedList() {};
};
