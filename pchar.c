#include "monty.h"

/**
 * pchar - Prints the char at the top of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the Monty file.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    if (current == NULL)
    {
        fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    if (current->n < 0 || current->n > 127) // Check if the value is in the ASCII range
    {
        fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }

    putchar(current->n);
    putchar('\n');
}
