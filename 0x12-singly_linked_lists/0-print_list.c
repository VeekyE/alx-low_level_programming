#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_list - prints all the elemnet of a linked list
 * @h: pointer list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
