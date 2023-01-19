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
