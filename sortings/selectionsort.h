#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "sorting.h"
#include"iostream"

extern std::vector<int> random_number;

inline void selectionSort()
{
    int i, j;
    for (i = 0; i < (int)random_number.size()-1; i++)
    {
        int min=i;
        for (j = i+1; j < (int)random_number.size(); j++)
        {
            if (random_number[j] < random_number[min]){
                min=j;
            }

        }
            int temp = random_number[i];
            random_number[i] = random_number[min];
            random_number[min] = temp;
            std::this_thread::sleep_for(std::chrono::milliseconds(10));

    }
}
#endif // SELECTIONSORT_H
