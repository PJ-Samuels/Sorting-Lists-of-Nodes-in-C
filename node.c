//
// Created by PJ Samuels on 3/15/21.
//
#include "node.h"
#include "list.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct node{
    int value;
    int* next;
}node;

node* createNode(int value){
        node *newNode = malloc(sizeof(node));
        newNode->value = value;
        newNode->next = NULL;
        return newNode;
}
bool addNode(struct node* node){
    struct node *newNode =  (struct node*)malloc(sizeof(struct node));
    newNode->value = node->value;
    newNode->next = NULL;
    if(head == NULL)
        head = newNode;
    else
    {
        struct node* lastNode = head;
        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
}
void printList(void){
    struct node *current_node = head;
    while ( current_node != NULL) {
        printf("%d ", current_node->value);
        current_node = current_node->next;
    }
}
struct node* findNode(int value){
    struct node* current = head;
    while (current != NULL) {
        if (value == current->value)
            return current->value;
        current = current->next;
    }
    return current;
}
bool deleteNode (struct node* node){
    struct node* temp = head;
    struct node* prev = NULL;
    if (temp != NULL && temp->value == node){
        head= temp->next;
        return true;
    }
    else
    {
        while (temp != NULL && temp->value != node)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return false;
        prev->next = temp->next;
    }
}
void deleteLargest(void){
    struct node* max = head;
    struct node* prev = NULL;
    while (head != NULL) {
        if (max < head->value)
            max = head->value;
        head = head->next;
    }
    bool ans = deleteNode(max);
    while(ans != false)
    {
        deleteNode(max);
    }
}
void sort(struct node *head)
{
    int swapped;
    struct node *value1;
    struct node *value2 = NULL;
    if (head == NULL)
        return;
    do{
        swapped = 0;
        value1 = head;
        while (value1->next != value2)
        {
            struct node *temp = value1->next;
            if (value1->value > temp){
                swap(value1, temp);
                swapped = 1;
            }
            value1 = value1->next;
        }
        value2 = value1;
    }
    while (swapped);
}
void swap(struct node* val1, struct node* val2){
    int temp = val1->value;
    val1->value = val2->value;
    val2->value = temp;
}
int counter(void){
    struct node* count = head;
    int counter = 0;
    while(count != NULL)
    {
        counter++;
        count = count->next;
    }
    return counter;
}

