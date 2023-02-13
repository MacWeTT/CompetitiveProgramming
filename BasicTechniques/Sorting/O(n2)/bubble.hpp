#ifndef _BUBBLE_H_
#define _BUBBLE_H_

#include <bits/stdc++.h>

template <typename t>
void bubbleSort(t arr[], int n)
{
    bool swapped = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

#endif // !_BUBBLE_H_
