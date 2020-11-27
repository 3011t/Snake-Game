#include "LinkedList.h"

template<class T>
void LinkedList<T>::pushFront(const T& newNode) {
    ListNode<T>* newHead = new ListNode<T>;
    newHead->data = newNode;
    newHead->next = m_head;

    if (!m_length) {
        m_head = newHead;
        m_tail = newHead;
    }
    else {
        m_head->prev = newHead;
        m_head = newHead;
    }

    ++m_length;
}

template<class T>
T LinkedList<T>::popFront() {
    T data;

    if (!m_length) {
        return data;
    }
    else {
        ListNode<T>* oldHead = m_head;
        data = oldHead->data;

        if(m_length == 1) {
            m_head = nullptr;
            m_tail = nullptr;
        }
        else if (m_length == 2) {
            m_head = m_tail;
            m_tail->prev = nullptr;
        }
        else {
            m_head = oldHead->next;
            m_head->prev = nullptr;
        }

        --m_length;
        delete oldHead;
    }
    return data;
}

template<class T>
void LinkedList<T>::pushBack(const T& newNode) {
    ListNode<T>* newTail = new ListNode<T>;
    newTail->data = newNode;
    newTail->prev = m_tail;

    if (!m_length) {
        m_tail = newTail;
        m_head = newTail;
    }
    else {
        m_tail->next = newTail;
        m_tail = newTail;
    }

    ++m_length;
}

template<class T>
T LinkedList<T>::popBack() {
    T data;

    if (!m_length) {
        return data;
    }
    else {
        ListNode<T>* oldTail = m_tail;
        data = oldTail->data;

        if(m_length == 1) {
            m_head = nullptr;
            m_tail = nullptr;
        }
        else if (m_length == 2) {
            m_tail = m_head;
            m_head->next = nullptr;
        }
        else {
            m_tail = oldTail->prev;
            m_tail->next = nullptr;
        }

        --m_length;
        delete oldTail;
    }
    return data;
}

template<class T>
T LinkedList<T>::getNextNode() {
    T data;
    
    if (m_iter) {
        data = m_iter->data;
        m_iter = m_iter->next;
    }

    return data;
}

template<class T>
void LinkedList<T>::resetIter() {
    m_iter = m_head;
}

template<class T>
int32_t LinkedList<T>::Length() {
    return m_length;
}