#include "monty.h" 

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
    if (stack->top == stack->size - 1)
	{
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
    for (int i = 0; i <= stack->top; i++)
	{
        printf("%d\n", stack->stack[i]);
    }
}

int pop(stack_t *stack)
{
    if (stack->top == -1)
	{
        printf("Error: stack underflow\n");
        return -1;
    }
    int value = stack->stack[stack->top];
    stack->top--;
    return value;
}

/**
  * pint - Prints the value at the top of the stack
  * @stack: Stack
  *
  * Return: Nothing
  */
void pint(stack_t *stack)
{
    if (stack->top == -1)
	{
        printf("Error: stack underflow\n");
        return;
    }
    printf("%d\n", stack->stack[stack->top]);
}

void swap(stack_t *stack)
{
    if (stack->top < 1)
	{
        printf("Error: not enough elements in stack to swap\n");
        return;
    }
    int temp = stack->stack[stack->top];
    stack->stack[stack->top] = stack->stack[stack->top - 1];
    stack->stack[stack->top - 1] = temp;
}

void add(stack_t *stack)
{
    if (stack->top < 1)
	{
        printf("Error: not enough elements in stack to add\n");
        return;
    }
    int a = pop(stack);
    int b = pop(stack);
    push(stack, a + b);
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
