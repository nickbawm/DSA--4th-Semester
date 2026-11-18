#include <stdio.h>
#define MAX 100

int queue[MAX], front = -1, rear = -1;

void enqueue() {
    int val;
    if (rear == MAX - 1) {
        printf("\nQueue Overflow!\n");
    } else {
        if (front == -1)
            front = 0;
        printf("Enter value to insert: ");
        scanf("%d", &val);
        rear++;
        queue[rear] = val;
        printf("%d inserted into queue.\n", val);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("\nQueue Underflow!\n");
    } else {
        printf("%d deleted from queue.\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty!\n");
    } else {
        printf("\nQueue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}