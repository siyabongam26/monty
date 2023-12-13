#include "monty.h"

/**
 * mul - Multiplies the second top element of the stack with the top element.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the Monty file.
 */
void mul(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    if (current == NULL || current->next == NULL)
    {
        fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    current->next->n *= current->n;
    pop(stack, line_number);  // Remove the top element from the stack
}
