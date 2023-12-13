#include "monty.h"

/**
 * rotl - Rotates the stack to the top.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the Monty file.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;
    stack_t *temp;

    (void)line_number;  // Unused parameter

    if (current != NULL && current->next != NULL)
    {
        temp = current;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = current;
        current->prev = temp;

        *stack = current->next;
        (*stack)->prev = NULL;

        current->next = NULL;
    }
}
