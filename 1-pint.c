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
  * push - Pushes an element to the stack
  * @stack: Stack
  * @value: Content to be added to stack
  *
  * Return: Nothing
  */
void push(stack_t *stack, int value)
{
    if (stack->top == stack->size - 1) {
        printf("Error: stack overflow\n");
        return;
    }
    stack->top++;
    stack->stack[stack->top] = value;
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

/**
  * pall - Prints all the values on the stack
  * @stack: Stack
  *
  * Return: Nothing
  */
void pall(stack_t *stack)
{
    for (int i = 0; i <= stack->top; i++) {
        printf("%d\n", stack->stack[i]);
    }
}
