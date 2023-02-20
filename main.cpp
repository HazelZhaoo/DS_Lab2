#include <iostream>
using namespace std;
#include "Queue.hpp"
#include "QueueItem.hpp"
#include "PriorityQueue.hpp"

int main()
{
    Queue<QueueItem<string>> q1;
    Queue<QueueItem<int>> q2;
    QueueItem<string> I1( "Sushi" , 8);
    QueueItem<string> str1("Tokboki" , 9);
    QueueItem<string> str2("Ramen" , 6);
    QueueItem<string> str3("Steak" , 7);
    QueueItem<string> str4("Hotpot" , 1);
    QueueItem<string> str5("BBQ" , 9);
    
    QueueItem<int> I2(3 , 8);
    QueueItem<int> A2(6 , 9);
    QueueItem<int> A3(4 , 9);
    q1.enqueue(I1);
    q1.enqueue(I1);
    q2.enqueue(A2);
    q2.enqueue(A3);
    
    Priority<string> P_test;
    P_test.enqueue(I1);
    P_test.enqueue(str1);
    P_test.enqueue(str2);
    P_test.enqueue(str3);
    P_test.enqueue(str4);
    P_test.enqueue(str5);
    
    P_test.dequeue();
     
    
    
}
