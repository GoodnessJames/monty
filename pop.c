#include "monty.h"

/**
 * pop - removes the top elwment of a stack
 */
void pop()
{
	if (empty_stack())
	{
		printf("L%d: can't pop an empty stack\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	else
	{
		int value;
		value = stack_top();
		stack_ptr--;
	}
}
