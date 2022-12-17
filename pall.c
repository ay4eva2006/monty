 #include "monty.h"

/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
 void pall(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	stack_t *current = *stack;

	if (stack == NULL || *stack == NULL)
		return;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
