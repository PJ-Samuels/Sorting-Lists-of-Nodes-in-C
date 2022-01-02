//
// Created by PJ Samuels on 3/15/21.
//
#include <stdbool.h>
#ifndef PS3_NODE_H
#define PS3_NODE_H
typedef struct node;
struct node* createNode(int value);
bool addNode(struct node* node);
struct node* findNode(int value);
bool deleteNode(struct node* node);
void deleteLargest(void);
void sort(struct node *head);
void swap(struct node* val1, struct node* val2);
int counter(void);
#endif //PS3_NODE_H
