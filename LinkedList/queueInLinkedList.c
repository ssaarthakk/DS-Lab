#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;
void insert();
void delete();
void display();
void main()
{
    int choice = 0;
    while (choice != 4)
    {
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("\nEnter your choice ?");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nEnter valid choice??\n");
        }
    }
}
void insert()
{
    struct node *new_node;
    int d;

    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        printf("\nEnter value?\n");
        scanf("%d", &d);
        new_node->data = d;
        new_node->next = NULL;
        if (front == NULL)
        {
            front = new_node;
            rear = new_node;
        }
        else
        {
            rear->next = new_node;
            rear = new_node;
        }
        printf("Item inserted :%d", new_node->data);
    }
}
void delete()
{
    struct node *temp;
    if (front == NULL)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        temp = front;
        printf("Item deleted:%d", temp->data);
        front = front->next;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    temp = front;
    if (front == NULL)
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("\n%d\n", temp->data);
            temp = temp->next;
        }
    }
}
