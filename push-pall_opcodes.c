
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

