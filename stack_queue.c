#include "monty.h"

/**
 * stack - Sets the format of the data to a stack (LIFO).
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the Monty file.
 */
void stack(stack_t **stack, unsigned int line_number)
{
    (void)line_number;  // Unused parameter

    // Do nothing, as stack is the default format (LIFO)
    (void)stack;
}

/**
 * queue - Sets the format of the data to a queue (FIFO).
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the Monty file.
 */
void queue(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;
    stack_t *temp;

    (void)line_number;  // Unused parameter

    while (current != NULL && current->next != NULL)
    {
        temp = current;
        current = current->next;
    }

    if (current != NULL)
        *stack = current;
}
