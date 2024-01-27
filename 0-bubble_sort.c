#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    int tmp;
    for (size_t i = 0; i < size - 1; ++i)
    {
        bool swapped = false;
        for (size_t j = 0; j < size - i - 1; ++j)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                swapped = true;
                print_array(array, size);
            }
        }
        /* If no two elements were swapped by inner loop, then the array is sorted.
         */
        if (!swapped)
            break;
    }
}