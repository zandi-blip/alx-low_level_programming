#include <function_pointers.h>
#include <stdio.h>

/**
* print_name -  prints a name
* @name: string to add
* @f: pointer to function
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name == nullptr || f == nullptr)
return (0);


f(name);
}
