#include "sort.h"

/**
 * swap_nodes - swap nodes in place
 * @head: the head node of the list to sort.
 * @node1: the first node to be swapped.
 * @node2: the second node to be swapped.
*/

void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2)
{
    if (node1->prev != NULL)
    node1->prev->next = node2;
    else
    *head = node2;

    if (node2->next != NULL)
    node2->next->prev = node1;
    node1->next = node2->next;
    node2->prev = node1->prev;
    node1->prev = node2;
    node2->next = node1;
}


/**
 * insertion_sort_list - sorting doubly linked lists using the Insertion Sort algorithm
 * @list: pointer to the head of the list
 * 
 * Return: void.
*/

void insertion_sort_list(listint_t **list)
{
listint_t *current = *list, *node, *runner;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

for (current = *list; current != NULL; current = runner)
{
    runner = current->next;
    node = current->prev;
    while (node != NULL && current->n < node->n) 
    {
        swap_nodes(list, node, current);
        print_list(*list);
        node = current->prev;
    }
    
}
}