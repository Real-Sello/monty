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
