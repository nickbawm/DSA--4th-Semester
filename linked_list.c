#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertAtBeginning() {
    int val;
    printf("Enter value to insert: ");
    scanf("%d", &val);

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    printf("%d inserted into the linked list.\n", val);
}

void deleteFromBeginning() {
    if (head == NULL) {
        printf("\nList is empty! Deletion not possible.\n");
    } else {
        struct Node* temp = head;
        head = head->next;
        printf("%d deleted from the linked list.\n", temp->data);
        free(temp);
    }
}

void display() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("\nLinked list is empty!\n");
    } else {
        printf("\nLinked list elements: ");
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int choice;
    do {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insertAtBeginning(); break;
            case 2: deleteFromBeginning(); break;
            case 3: display(); break;
            case 4: break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}