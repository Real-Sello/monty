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
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}

		c++;
	}

	ni *= min;
	return (ni);
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

/**
  * main - Entry point
  *
  * Return: 0 always
  */
int main()
{
    stack_t *stack = create_stack(10);
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    pall(stack);
    return 0;
}
