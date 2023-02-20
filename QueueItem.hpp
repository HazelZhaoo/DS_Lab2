#include <iostream>
using namespace std;
#ifndef QueueItem_h
#define QueueItem_h

template <typename T>
class QueueItem
{
private:
    T value;
    int priority;
    
public:
    QueueItem():value(T()), priority(0) {};
    QueueItem(T passed_value , int prior)
    {
        value = passed_value;
        priority = prior;
        
        cout << passed_value << " value" << "\n" << prior << " priority" << endl;
        
    };
    T getValue()
    {
        cout << value << endl;
        return value;
    };

    void setValue(T v)
    {
        value = v;
    };
    void setPrio(int p )
    {
        priority = p ;
    };

    int getPrio()
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

