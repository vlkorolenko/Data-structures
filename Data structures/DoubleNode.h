#pragma once
#include <memory>

namespace doublenode
{
    template<typename T>
    struct DoubleNode
    {
        T data;
        std::shared_ptr<DoubleNode> next;
        std::weak_ptr<DoubleNode> previous;

        DoubleNode(T data) : data{ data } {}
    };
}