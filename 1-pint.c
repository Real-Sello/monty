#include "monty.h"

/**
  * create_stack - Creating the stack
  * @size: The size of the stack
  *
  * Return: stack
  */
stack_t *create_stack(int size)
{
    stack_t *stack = (stack_t *)malloc(sizeof(stack_t));
    stack->stack = (int *)malloc(sizeof(int) * size);
    stack->top = -1;
    stack->size = size;
    return stack;
}

/**
  * pint - Prints the value at the top of the stack
  * @stack: Stack
  *
  * Return: Nothing
  */
void pint(stack_t *stack)
{
    if (stack->top == -1) {
        printf("Error: stack underflow\n");
        return;
    }
    printf("%d\n", stack->stack[stack->top]);
}
