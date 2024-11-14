#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *top;

void main()
{
    int choice = 0;
    while (choice != 4)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n Enter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Please Enter valid choice ");
        }
    }
}
void push()
{
    int d;
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter the value");
        scanf("%d", &d);
        new_node->data = d;
        new_node->next = NULL;
        if (top == NULL)
        {
            top = new_node;
        }
        else
        {
            new_node->next = top;
            top = new_node;
        }
        printf("Item pushed :%d", new_node->data);
    }
}

void pop()
{
    int item;
    struct node *temp;
    if (top == NULL)
    {
        printf("Underflow");
    }
    else
    {
        item = top->data;
        temp = top;
        top = top->next;
        free(temp);
        printf("Item popped:%d", item);
    }
}
void display()
{
    int i;
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Printing Stack elements \n");
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
