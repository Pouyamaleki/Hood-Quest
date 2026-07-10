#include "Maxheap.h"

void MaxHeap::heapifyUp(int i)
{
    while (i > 0 && heapArr[parent(i)].second < heapArr[i].second)
    {
        swap(heapArr[parent(i)], heapArr[i]);
        i = parent(i);
    }
}

void MaxHeap::heapifyDown(int i)
{
    int largest = i;
    int left = leftChild(i);
    int right = rightChild(i);

    if (left < (int)heapArr.size() && heapArr[left].second > heapArr[largest].second)
        largest = left;

    if (right < (int)heapArr.size() && heapArr[right].second > heapArr[largest].second)
        largest = right;

    if (largest != i)
    {
        swap(heapArr[i], heapArr[largest]);
        heapifyDown(largest);
    }
}

void MaxHeap::insert(const string &username, long int score)
{
    heapArr.push_back({username, score});
    heapifyUp((int)heapArr.size() - 1);
}

int MaxHeap::search(const string &username) const
{
    for (int i = 0; i < (int)heapArr.size(); i++)
    {
        if (heapArr[i].first == username)
            return i;
    }
    return -1;
}
