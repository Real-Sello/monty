#include "monty.h"

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
  * main - Entry point
  *
  * Return: 0 always
  */
int main()
{
    stack_t *stack = create_stack(10);
    push(stack, 1);
	pint(stack);
    push(stack, 2);
	pint(stack);
    push(stack, 3);
    pint(stack);
    return 0;
}
