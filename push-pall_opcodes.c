
#include "monty.h"

/**
 * push - adds new element on top of the stack
 * @value: element to be added
 *
 * Return: No return
 */
void push(int value)
{
	struct memory_block *ret;

	ret = malloc(sizeof(struct memory_block));
	if (!ret)
	{
		printf("L%d: push: memory allocation failed\n", _LINE_);
		exit(EXIT_FAILURE);
	}
	ret->value = atoi(value);
	ret->next = free_list:
}

/**
 * pall - prints the top element
 */
void pall()
{
	sttuct memory block *curr, *prev;
	curr = free_list;
	prev = NULL;

	while (curr != NULL)
	{
		printf("%d\n", curr->value);
		curr = curr->next;
	}
	if (prev != NULL)
	{
		curr = curr->next;
	}
	else
	{
		prev = curr;
		break;
	}
}
