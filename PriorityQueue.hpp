#ifndef P_Queue_h
#define P_Queue_h
#include <iostream>
#include "QueueItem.hpp"
#include "Queue.hpp"


//contains a Queue to item(type T) and will have the methods that allow the user to
//template U is for queueitem//
template <typename T>
class Priority
{
    
private:
    Queue<QueueItem<T>>* queue_ptr[10];
public:
    Priority();
    Priority(Queue<QueueItem<T>>* init);//constructor --iterate and set to null ptr
    Priority(Queue<T>*&& temp);
    Priority(const Priority<T>& copy_obj);
    ~Priority();
    void enqueue (const QueueItem<T>& item);
    QueueItem<T> dequeue();
    bool isEmpty();
     
};
#endif /* Priority_Queue_h */
