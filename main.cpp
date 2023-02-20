#include <iostream>
using namespace std;
#include "Queue.hpp"
#include "QueueItem.hpp"
#include "P_Queue.hpp"

int main()
{
    Queue<QueueItem<int>> q1;
    Queue<QueueItem<int>> q2;
    
//    q1.enqueue(2);
//    q1.enqueue(3);
     
//    q1.getSize();
    Queue<QueueItem<int>>* ptr = q1;
    
    QueueItem<int> I1( 2 , 8);
    QueueItem<int> I2(3 , 8);
    QueueItem<int> A2(6 , 9);
    QueueItem<int> A3(4 , 9);
//    q1.enqueue(I1);
    q1.enqueue(I2);
    q2.enqueue(A2);
    q2.enqueue(A3);
    
    Priority<Queue<QueueItem<int>>> P_test(ptr);
 
    
     
    
    
}
