#include "Maxheap.h"

void MaxHeap::heapifyUp(int i)
{
    while (i > 0 && heapArr[parent(i)].second < heapArr[i].second)
    {
        swap(heapArr[parent(i)], heapArr[i]);
        i = parent(i);
    }
}
