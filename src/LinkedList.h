#pragma once

#include "Core.h"

template<class T>
struct ListNode {
    T data;
    ListNode* prev;
    ListNode* next;
};

/*
* Class that provides Doubly Linked List functionality.
* This type of class exists in the standard library, but I wanted to implement my own class for this.
*/
template<class T>
class LinkedList {
public:
    void pushFront(const T& newNode);
    T popFront();

    void pushBack(const T& newNode);
    T popBack();

    T getNextNode();
    void resetIter();

    int Length();
private:
    //remembers the head and tail of the list
    ListNode<T>* m_head = nullptr;
    ListNode<T>* m_tail = nullptr;

    //for the purpose of iterating over the snake
    ListNode<T>* m_iter = nullptr;

    int32_t m_length = 0;
};