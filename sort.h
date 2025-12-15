#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 *
 * Description: Node structure used for sorting algorithms that
 *              work on doubly linked lists.
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *               using the Bubble sort algorithm.
 * @array: Pointer to the array to sort
 * @size: Number of elements in the array
 *
 * Description: Prints the array each time two elements are swapped.
 */
void bubble_sort(int *array, size_t size);

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       in ascending order using Insertion sort.
 * @list: Pointer to the head of the list
 *
 * Description: Prints the list after each swap. Swaps nodes, not values.
 */
void insertion_sort_list(listint_t **list);

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the array to print
 * @size: Number of elements in the array
 */
void print_array(const int *array, size_t size);

/**
 * print_list - Prints a doubly linked list of integers
 * @list: Pointer to the list to print
 */
void print_list(const listint_t *list);

#endif /* SORT_H */
