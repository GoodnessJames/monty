#include "monty.h"

/**
 * add - adds the value of 2 elements
 */
void add()
{
	if (stack_size < 2)
	{
		printf("L%d: can't add, stack too short\n", __LINE__);
        exit(EXIT_FAILURE);
	}

	else
	{
		int result;
		result = stack_top() + stack_top();
		stack_top = stack_top->next;
	}
}

