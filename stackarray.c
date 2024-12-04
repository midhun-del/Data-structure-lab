#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100

int stack[MAX];
int top = -1;

bool isEmpty() {
    return top < 0;
}

bool isFull() {
    return top >= MAX - 1;
}

void push() {
    int value;
    if (isFull()) {
        printf("Stack is full\n");
    } else {
        printf("Enter push item: ");
        scanf("%d", &value);
        stack[++top] = value; // Increment top and assign value in one step
        printf("%d pushed to stack\n", value);
    }
}

void pop() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("%d is popped out\n", stack[top--]); // Decrement top after popping
    }
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        for (int i = 0; i <= top; i++) {
            printf("stack[%d] = %d\n", i, stack[i]); // Corrected index
        }
    }
}

void peek() {
    if (!isEmpty()) {
        printf("Top element is: %d\n", stack[top]);
    } else {
        printf("Stack is empty\n");
    }
}

int main() {
    int opt;
    do {
        printf("\n..................\n");
        printf("1) PUSH\n");
        printf("2) POP\n");
        printf("3) PEEK\n");
        printf("4) DISPLAY\n");
        printf("5) QUIT\n");
        printf("..................\n");
        printf("Choose your option: ");
        scanf("%d", &opt);
        switch (opt) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid operation! Try again...\n");
        }
    } while (1);
    return 0;
}

