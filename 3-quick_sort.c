#include "sort.h"

/**
 * lomuto_partition - Partitions an array using Lomuto scheme
 * @array: Array to partition
 * @low: Starting index
 * @high: Ending index (pivot)
 * @size: Size of the array
 *
 * Return: Index of the pivot
 */
static size_t lomuto_partition(int *array,
size_t low,
size_t high,
size_t size)
{
size_t i, j;
int pivot, temp;

pivot = array[high];
i = low;

for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
if (i != j)
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
i++;
}
}

if (i != high)
{
temp = array[i];
array[i] = array[high];
array[high] = temp;
print_array(array, size);
}

return (i);
}

/**
 * quick_sort_recursive - Recursively sorts partitions
 * @array: Array to sort
 * @low: Starting index
 * @high: Ending index
 * @size: Size of the array
 */
static void quick_sort_recursive(int *array,
size_t low,
size_t high,
size_t size)
{
size_t pivot;

if (low < high)
{
pivot = lomuto_partition(array, low, high, size);

if (pivot > 0)
quick_sort_recursive(array, low, pivot - 1, size);

quick_sort_recursive(array, pivot + 1, high, size);
}
}

/**
 * quick_sort - Sorts an array using Quick sort (Lomuto)
 * @array: Array to sort
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;

quick_sort_recursive(array, 0, size - 1, size);
}
