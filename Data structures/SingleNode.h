#pragma once
#include <memory>

namespace singlenode
{
    template<typename T>
    struct SingleNode
    {
        T data;                                     // ���, �� ������ ��� �����.
        std::unique_ptr<SingleNode> next;           // �������� �� ��������� ����� � ������.

        // �����������, ������ ��� ��� ��������� � ���� �� �������� �������� �� ��������� �����.
        SingleNode(T data) : data{ data }, next{ nullptr } {};
    };
}