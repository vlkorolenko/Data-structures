#pragma once
#include <memory>

namespace stacknode {
    template<typename T>
    struct StackNode {
        T data;
        std::unique_ptr<StackNode> next;
        StackNode(T data) : data{ data }, next{ nullptr } {};
    };
}