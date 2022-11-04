#include "sort.h"

/**
 * bubble_sort - Sort algorithm in an acending order
 * @array : container to sort
 * @size : Size of container
 * Return : Nothing
 */
void bubble_sort(int *array, size_t size)
{
size_t n, i, temp;
for (n = 0; n <= size - 1; n++)
{
for (i = 0; i < size - n - 1; i++)
{
if (array[i] >  array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
print_array(array, size);
}
}
}
}
