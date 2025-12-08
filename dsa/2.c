#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct {
    int arr[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *stack) {
    stack->top = -1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow! Cannot push %d.\n", value);
        return;
    }
    stack->arr[++stack->top] = value;
    printf("Pushed %d onto the stack.\n", value);
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
        return -1;
    }
    int popped = stack->arr[stack->top--];
    printf("Popped %d from the stack.\n", popped);
    return popped;
}

int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty! No element to peek.\n");
        return -1;
    }
    return stack->arr[stack->top];
}

int main() {
    Stack stack;
    initialize(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element: %d\n", peek(&stack));

    pop(&stack);
    pop(&stack);

    printf("Top element after pops: %d\n", peek(&stack));

    push(&stack, 40);

    while (!isEmpty(&stack)) {
        pop(&stack);
    }

    pop(&stack);

    return 0;
}
