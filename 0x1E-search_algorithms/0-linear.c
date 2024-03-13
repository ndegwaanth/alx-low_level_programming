#include "search_algos.h"

/**
 * linear_search - search for values in an array of integersin linear search
 * @array: this id the array to deal with
 * @size: this is the length of the array
 * @value: this is the target value
 * Return - return -1 if the array is null
 */
int linear_search(int *array, size_t size, int value)
{
    size_t m = 0;

    if (array == null)
        return -1;
    
    for (; m < size; m++)
    {
        printf("Value checked array[%d] = [%d]", array[m], value);
        if (array[m] == value)
            return m;
    }

    return -1;
}
