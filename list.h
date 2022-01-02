//
// Created by PJ Samuels on 3/15/21.
//

#ifndef PS3_LIST_H
#define PS3_LIST_H
#include <stdbool.h>
struct node* head;
struct node* lastNode;
bool deleteNode (struct node* node); //Delete a node in the list
void printList(void); //Print the values in the list

#endif //PS3_LIST_H
