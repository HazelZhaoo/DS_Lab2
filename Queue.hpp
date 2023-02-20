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
    Queue():front(nullptr) , back(nullptr) , size(0)
    {
        cout << "Queue constructed." << endl;
    };

    ~Queue()
    {
        while(front != nullptr)
        {
            Node<T>* temp = front;
            front = front ->next;
            delete temp;
        }
    };
    
    void enqueue(T item)
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
    
    T dequeue()
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
    
    bool isEmpty()
    {
        return front == nullptr;
    }
    
    int getSize()
    {
        cout << size <<endl;
        return size;
        
    }
    
    T peek() const // to see the value of the front
    {
        return front -> data;
    }
};
#endif /* Queue_hpp */
