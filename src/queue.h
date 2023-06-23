#pragma once
#include "list.h"
/// <summary>
/// Queue datastructure. Uses FIFO approach.
/// </summary>
template <typename Q>
class Queue
{
private:
    list::List<Q> linkedList;

public:
    /// <summary>
    /// Adds elemet of type Q to the end of queue
    /// </summary>
    void enqueue(Q data)
    {
        linkedList.addLast(data);
    }
    /// <summary>
    /// Adds element at the end of list.
    /// </summary>
    /// <returns>First element in a queue and removes it from queue</returns>
    Q dequeue()
    {
        // linkedList.addFirst(data);
        return linkedList.deleteFirst();
    }
    /// <summary>
    /// Prints all data in queue into console.
    /// </summary>
    void printQueue()
    {
        linkedList.printList();
    }
};
