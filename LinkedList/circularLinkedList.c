#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertAtBeginning(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
}

void insertAtEnd(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

void insertAtPosition(int data, int position)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    if (position == 1)
    {
        if (head == NULL)
        {
            head = newNode;
            newNode->next = head;
        }
        else
        {
            struct Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            newNode->next = head;
            temp->next = newNode;
            head = newNode;
        }
        return;
    }
    struct Node *temp = head;
    for (int i = 1; i < position - 1 && temp->next != head; i++)
    {
        temp = temp->next;
    }
    if (temp->next == head && position != 2)
    {
        printf("Position out of range\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtBeginning()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    if (head->next == head)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        struct Node *toDelete = head;
        head = head->next;
        temp->next = head;
        free(toDelete);
    }
}

void deleteAtEnd()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    if (head->next == head)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next->next != head)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = head;
    }
}

void deleteAtPosition(int position)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    if (position == 1)
    {
        deleteAtBeginning();
        return;
    }
    struct Node *temp = head;
    for (int i = 1; i < position - 1 && temp->next != head; i++)
    {
        temp = temp->next;
    }
    if (temp->next == head)
    {
        printf("Position out of range\n");
        return;
    }
    struct Node *toDelete = temp->next;
    temp->next = temp->next->next;
    free(toDelete);
}

void printList()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = head;
    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("HEAD\n");
}

void countNodes()
{
    if (head == NULL)
    {
        printf("The number of nodes are: 0\n");
        return;
    }
    int count = 0;
    struct Node *temp = head;
    do
    {
        count++;
        temp = temp->next;
    } while (temp != head);
    printf("The number of nodes are: %d\n", count);
}

void search(int key)
{
    if (head == NULL)
    {
        printf("Item not found\n");
        return;
    }
    struct Node *temp = head;
    int position = 1;
    do
    {
        if (temp->data == key)
        {
            printf("Item found at position: %d\n", position);
            return;
        }
        temp = temp->next;
        position++;
    } while (temp != head);
    printf("Item not found\n");
}

int main()
{
    int choice, data, position;
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Delete at beginning\n");
        printf("5. Delete at end\n");
        printf("6. Delete at position\n");
        printf("7. Print list\n");
        printf("8. Count nodes\n");
        printf("9. Search item\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtBeginning(data);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtEnd(data);
            break;
        case 3:
            printf("Enter data: ");
            scanf("%d", &data);
            printf("Enter position: ");
            scanf("%d", &position);
            insertAtPosition(data, position);
            break;
        case 4:
            deleteAtBeginning();
            break;
        case 5:
            deleteAtEnd();
            break;
        case 6:
            printf("Enter position: ");
            scanf("%d", &position);
            deleteAtPosition(position);
            break;
        case 7:
            printList();
            break;
        case 8:
            countNodes();
            break;
        case 9:
            printf("Enter item to search: ");
            scanf("%d", &data);
            search(data);
            break;
        case 10:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}