#include <stdio.h>
#include "sort.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to print
 * @size: Number of elements
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");
}

int main(void)
{
    int array[] = {64, 25, 12, 22, 11};
    size_t size = sizeof(array) / sizeof(array[0]);

    print_array(array, size);
    selection_sort(array, size);
    print_array(array, size);
    return (0);
}

