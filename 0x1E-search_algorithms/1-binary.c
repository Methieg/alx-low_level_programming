#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value) {
    if (array == NULL)
        return -1;

    printf("Searching in array: ");
    for (int i = 0; i < size; i++) {
        printf("%d, ", array[i]);
    }
    printf("\n");

    int left = 0;
    int right = size - 1;
    int middle;

    while (left <= right) {
        middle = left + (right - left) / 2;
        printf("Searching in array: ");
        for (int i = left; i <= right; i++) {
            printf("%d, ", array[i]);
        }
        printf("\n");

        if (array[middle] == value) {
            return middle;
        } else if (array[middle] < value) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}
