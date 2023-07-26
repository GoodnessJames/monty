#include "monty.h"

/**
 * pint - prints ths top element followed by a new line
 */
void pint()
{
	if (empty_stack)
	{
		printf("L%d: can't pint, stack empty\n", __LINE__);
		exit(EXIT_FAILURE);
	}

	else
	{
		printf("%d\n", stack_top());
	}
}
