#ifndef Queue_hpp
#define Queue_hpp

#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T>* next;
    Node(T in_data)
    {
        data = in_data;
        next = nullptr;
    };
};

template <typename T>
class Queue
{
private:
    Node<T>* front;
    Node<T>* back;
    int size;
public:
    Queue();
    ~Queue();
    void enqueue(T item);
    T dequeue();
    bool isEmpty();
    int getSize() const;
    T peek() const; // added this to see the value of the front
 };
#endif /* Queue_hpp */

 
