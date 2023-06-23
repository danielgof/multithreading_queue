#include<iostream>
#include"list.h"
#include"queue.h"


int main()
{
    Queue<float> queue;
    queue.enqueue(90);
    queue.enqueue(45);
    queue.printQueue();
    float last_elm;
    last_elm = queue.dequeue();
    std::cout << last_elm << std::endl;
}