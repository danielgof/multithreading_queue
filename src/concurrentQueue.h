#include <mutex>
#include "queue.h"

template <typename T>
class ConcurrentQueue
{
public:
    void enqueue(const T &value)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        queue_.enqueue(value);
    }

    T dequeue(T &value)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        return queue_.dequeue();
    }

private:
    Queue<T> queue_;
    mutable std::mutex mutex_;
};
