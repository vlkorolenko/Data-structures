#pragma once
#include <memory>
namespace queuenode {
    template<typename T>
    struct QueueNode {
        T data;
        std::shared_ptr<QueueNode> next;
        std::weak_ptr<QueueNode> previous;

        QueueNode(T data) : data{ data } {}
    };
}