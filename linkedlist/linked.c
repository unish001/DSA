#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    int n;
    struct node *head = NULL, *temp = NULL, *newNode = NULL;
    printf("Enter the no of nodes to be created: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = i;      
        newNode->link = NULL;

        if (head == NULL) {
            head = newNode;    
            temp = head;
        } else {
            temp->link = newNode;
            temp = newNode;
        }
    }

    // Display the list
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL");

    return 0;
}