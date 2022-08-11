//Implementation of Linked list
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    head = NULL;
    int choice;
    while (choice == 1)
    {
        if (head = null)
        {
            newnode = (struct node *)malloc(sizeof(struct node *));
            printf("Enter data ");
            scanf("%d", &newnode->data);
            newnode->next = NULL;
            head = newnode;
            else
            {
            }
            printf("Do you want to continue(1)? ");
            scanf("%d", &choice);
        }

        return NULL;
    }
