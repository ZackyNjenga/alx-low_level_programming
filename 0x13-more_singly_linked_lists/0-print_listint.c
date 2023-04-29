#include "lists.h"
#include <stdio.h>

/**
 * print_listint function prints all the elements in the list
 * @h: A pointer to listint structure
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
        const listint_t  *new_node = h;

        for (; new_node; mew_node = new_node -> next)
        {
                printf("%d\n", new_node -> n;
                i++
        }
	return (i);
}
