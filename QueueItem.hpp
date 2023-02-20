#ifndef QueueItem_h
#define QueueItem_h

template <typename T>
class QueueItem
{
private:
    T value;
    int priority;
    
public:
    QueueItem();
    QueueItem(T passed_value , int prior);
    T getValue() const;
    void setValue(T v);
    void setPrio(int );
    int getPrio() const;
    
};


#endif /* QueueItem_h */

