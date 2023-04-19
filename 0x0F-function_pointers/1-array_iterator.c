#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - function given as a parameter on each element of an array
* @array: array to execute function on
* @size: is the size of te array
* @action: is a pointer to the function you need to use
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;


if (array && action)
{
i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
}

