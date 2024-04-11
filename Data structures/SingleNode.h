#pragma once
#include <memory>

namespace singlenode
{
    template<typename T>
    struct SingleNode
    {
        T data;                                     // Дані, які зберігає цей вузол.
        std::unique_ptr<SingleNode> next;           // Вказівник на наступний вузол у списку.

        // Конструктор, приймає дані для зберігання у вузлі та ініціалізує вказівник на наступний вузол.
        SingleNode(T data) : data{ data }, next{ nullptr } {};
    };
}