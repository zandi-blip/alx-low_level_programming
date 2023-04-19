#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - function that searches for an integer
* @array: array
* @size: is the number of elements in the array
* @cmp: is a pointer to the function to be used to compare values
* Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size > 0)
	
if (array == nullptr || size <= || cmp == nullptr)
return (-1);
{
while (i < size)
{
if (cmp(array[i]))
return (i);

i++;

}

