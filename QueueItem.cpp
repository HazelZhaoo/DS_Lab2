#include <iostream>
using namespace std;
#include "QueueItem.hpp"
#ifndef QueueItem_h
#define QueueItem_h

template <typename T>
QueueItem<T>::QueueItem():value(T()), priority(0) {};
 
 
template <typename T>
QueueItem<T>::QueueItem(T passed_value , int prior)
{
    value = passed_value;
    priority = prior;
    
    cout <<"QueueItem constructed with "<< passed_value << " value" << "and" << prior << " priority" << endl;
    
};

template <typename T>
T QueueItem<T>::getValue() const
{
    cout << value << endl;
    return value;
};

template <typename T>
void QueueItem<T>::setValue(T v)
{
    value = v;
};

template <typename T>
void QueueItem::setPrio(int p)
{
    priority = p ;
};

template <typename T>
int QueueItem::getPrio() const
{
    cout << priority << endl;
    return priority;
};
    
};

template <typename T>
ostream& operator<<(ostream& os,QueueItem<T>& item)
{
    os << "Value: " << item.getValue() << ", Priority: " << item.getPrio();
    return os;
}

#endif /* QueueItem_h */
