
#include <iostream>
using namespace std;
#include "PriorityQueue.hpp"
#include "QueueItem.hpp"
#include "Queue.hpp"

#ifndef P_Queue_h
#define P_Queue_h
//contains a Queue to item(type T) and will have the methods that allow the user to
//template U is for queueitem//
template <typename T>
Priority<T>::Priority()
{
    cout << "Priority Queue constructed" << endl;
    for(int i = 0 ; i < 10 ; i++)
    {
        queue_ptr[i] = nullptr;
    }
};

template <typename T>
Priority<T>::Priority(Queue<QueueItem<T>>* init)//constructor --iterate and set to null ptr
{
    cout << "The priority  of the item inserted in the priority queue is " << init -> peek() << endl;
    for(int i = 0 ; i < 10 ; i++) //needs review if we are looping the array or checking the priority of the queueitem
        {
             if(queue_ptr[i] == nullptr)
                 queue_ptr[i] = init;
        }
};
template <typename T>
Priority<T>::Priority(Queue<T>*&& temp)
    {
        for(int i = 0 ; i < 10 ; i++)
        {
            if(queue_ptr[i] == nullptr)
            {
                queue_ptr[i] = temp;
            }
        }
        delete[] temp;
        
    };
    
template <typename T>
Priority<T>::Priority(const Priority<T>& copy_obj)
{
    for(int i = 0 ; i < 10 ; i++)
    {
        if(!isEmpty())
        {
            delete [] queue_ptr;
        }
        queue_ptr[i] = copy_obj.queue_ptr[i];
    }
    
};

template <typename T>
Priority<T>::~Priority()
    {
        for(int i = 0 ; i < 10 ; i++)
        {
            delete queue_ptr[i];
        }
    };

template <typename T>
void Priority<T>::enqueue (const QueueItem<T>& item)
    {
        
        if(item.getPrio() < 0 || item.getPrio() > 9)
            throw runtime_error("Index out of bounds!");
        
        if(queue_ptr[item.getPrio()] == nullptr)
        {
            queue_ptr[item.getPrio()] = new Queue<QueueItem<T>>();
        }
        else
            (queue_ptr[item.getPrio()]) -> enqueue(item);
    };
    
template <typename T>
QueueItem<T>Priority<T>:: dequeue()
{
    for(int i = 9 ; i >= 0 ; i--)
    {
        if(queue_ptr[i] != nullptr && !(queue_ptr[i]->isEmpty()))
        {
            cout << "Dequeuing from queue with priority " << i << endl;
            return queue_ptr[i] -> dequeue();
        }
    }
    throw runtime_error("Queue is empty!");
}

template <typename T>
bool Priority<T>::isEmpty()
{
    if((queue_ptr -> getSize()) == 0)
    {
        return true;
    }
};

#endif /* Priority_Queue_h */
