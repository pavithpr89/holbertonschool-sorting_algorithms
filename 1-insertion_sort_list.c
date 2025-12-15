#include "sort.h"

/**
 * swap_nodes - Swaps two adjacent nodes in a doubly linked list
 * @list: Pointer to the head of the list
 * @left: Pointer to the left node
 * @right: Pointer to the right node
 *
 * Description: Swaps two nodes and updates the head if necessary.
 */
static void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
if (!left || !right || !list)
return;

left->next = right->next;
if (right->next)
right->next->prev = left;

right->prev = left->prev;
right->next = left;

if (left->prev)
left->prev->next = right;
else
*list = right;

left->prev = right;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       in ascending order using Insertion sort.
 * @list: Pointer to the head of the list
 *
 * Description: Prints the list after each node swap.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *compare;

if (!list || !*list || !(*list)->next)
return;

current = (*list)->next;
while (current)
{
compare = current;
while (compare->prev && compare->n < compare->prev->n)
{
swap_nodes(list, compare->prev, compare);
print_list(*list);
}
current = current->next;
}
}
