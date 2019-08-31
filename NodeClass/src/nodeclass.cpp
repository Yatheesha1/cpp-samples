#include <stdlib.h>
#include <stdio.h>
#include "nodeclass.h"
#include <iostream>
using namespace std;

NodeFunctions::NodeFunctions() {}
struct Node *NodeFunctions::newNode(int value)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->value = value;
    node->link = NULL;
    return node;
}
int NodeFunctions::getNodeLength(struct Node *node)
{
    int i = 0;
    if (node)
    {
        while (node)
        {
            node = node->link;
            i++;
        }
    }
    return i;
}
void NodeFunctions::display(struct Node *node)
{
    if (node)
    {
        printf("Node values: [ ");
        while (node)
        {
            printf("%d ", node->value);
            node = node->link;
        }
        printf("]\n");
    }
    else
    {
        printf("Node is empty\n");
    }
}

struct Node *NodeFunctions::insert(struct Node *node)
{
    int value;
    printf("\nEnter the value: ");
    scanf("%d", &value);
    if (node)
    {
        node->link = newNode(value);
        node = node->link;
    }
    else
    {
        node = newNode(value);
        header = node;
    }
    printf("%d is inserted\n", node->value);
    return node;
}

void NodeFunctions::remove(struct Node **headNode, struct Node **currNode)
{
    if ((*headNode))
    {
        int value;
        printf("\nEnter the index: ");
        scanf("%d", &value);
        int nodeLen = getNodeLength((*headNode));
        printf("Length: %d\n", nodeLen);
        struct Node *tempNode = (*headNode);
        if (0 <= value && value < nodeLen)
        {
            //int len = value;
            if (value == 0)
            {
                printf("%d is deleted\n", (*headNode)->value);
                (*headNode) = (*headNode)->link;
            }
            else
            {
                struct Node *temp;
                while (value--)
                {
                    temp = tempNode;
                    tempNode = tempNode->link;
                }
                printf("%d is deleted\n", tempNode->value);
                temp->link = tempNode->link;
                if (temp->link == NULL)
                    (*currNode) = temp;
            }
        }
        else
        {
            printf("Connot find index %d\n", value);
        }
    }
    else
    {
        printf("Node is empty\n");
    }
}