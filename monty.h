#ifndef _MONTY_
#define _MONTY_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - Stack
 * @stack: .....
 * @top: ......
 * @size: .......
 *
 * Description: stack.......
 */
typedef struct stack_s {
    int *stack;
    int top;
    int size;
} stack_t;

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

int _atoi(char *s);
void push(stack_t *stack, int value);
void pall(stack_t *stack);
void pint(stack_t *stack);
void swap(stack_t *stack);
void pint(stack_t *stack);
void add(stack_t *stack);

#endif
