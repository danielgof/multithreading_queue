#pragma once

namespace list
{
    /// <summary>
    /// List data stucture.
    /// </summary>
    template <typename T>
    class List
    {
    private:
        struct Node
        {
            T data;
            Node *next;
        };
        Node *head = nullptr;

    public:
        /// <summary>
        /// Adds element at the end of a list.
        /// </summary>
        void addLast(T value)
        {
            Node *newNode = new Node;
            newNode->data = value;
            newNode->next = nullptr;
            if (head == nullptr)
            {
                head = newNode;
                return;
            }
            Node *currentNode = head;
            while (currentNode->next != nullptr)
            {
                currentNode = currentNode->next;
            }

            currentNode->next = newNode;
        }
        /// <summary>
        /// Adds element at the begging of a list.
        /// </summary>
        void addFirst(T data)
        {
            Node *newNode = new Node();
            newNode->data = data;
            newNode->next = head;
            head = newNode;
        }
        /// <summary>
        /// Prints data from list's nodes to console.
        /// </summary>
        void printList()
        {
            Node *currentNode = head;
            while (currentNode != nullptr)
            {
                std::cout << currentNode->data << std::endl;
                currentNode = currentNode->next;
            }
        }
        /// <summary>
        /// Gets first element in a queue.
        /// </summary>
        /// <returns>First element in a queue</returns>
        T deleteFirst()
        {
            Node* res = new Node();
            res = head;
            head = head->next;
            return res->data;
        }
    };
}
