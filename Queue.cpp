#include <iostream>
using namespace std;
#include "Queue.hpp"
#ifndef Queue_hpp
#define Queue_hpp


 
template <typename T>
Queue<T>::Queue():front(nullptr) , back(nullptr) , size(0)
{
    cout << "Queue constructed." << endl;
};

template <typename T>
Queue<T>::~Queue()
{
    while(front != nullptr)
    {
        Node<T>* temp = front;
        front = front ->next;
        delete temp;
    }
};

template <typename T>
void Queue<T>:: enqueue(T item)
{
    Node<T>* insert_node = new Node(item);
    if(front == nullptr)
    {
        front = back = insert_node;
    }
    back -> next = insert_node;
    back = insert_node;
    
    size++;
    cout << "enqueue " << item <<" by enqueue from Queue"<< endl;
};

template <typename T>
T Queue<T>::dequeue()
{
    if (isEmpty())
    {
        throw runtime_error ("Error");
        
    }
    T value = front->data;
    Node<T>* delete_node = front;
    front = front ->next;
    delete delete_node;

    size--;
    if (size == 0)
      {
        back = nullptr;
      }
    cout << "dequeue " << value << " by dequeue from Queue" <<endl;
    return value;
  }

template <typename T>
bool Queue<T>::isEmpty()
{
    return front == nullptr;
}

template <typename T>
int Queue<T>::getSize() const
{
    return size;
}

template <typename T>
T Queue<T>::peek() const // to see the value of the front
{
    return front -> data;
}

#endif /* Queue_hpp */
