#include "sort.h"

/**
 * Swap - swap two elements in an array using pointers
 * @arr: the array to be sorted
 * @i: index of first element to be swapped
 * @j: index of second element to be swapped
 */

void Swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

/**
 * selection_sort - sort an array using the Selection Sort algorithm.
 * @array: the array to sort.
 * @size: the number of elements in the array.
 * Return: void.
 */

void selection_sort(int *array, size_t size)
{
    size_t i, j, min;

    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
                min = j;
        }
        if (min != i)
        {
            Swap(array, min, i);
        }
        print_array(array, size);
    }
}