#include <stdio.h>

#include "list.h"
#include "node.h"

int main() {
    int arr[] = {89, 39, 18, 96, 71, 25, 2, 55, 60, -8, 9, 42, 69, 96, 24};
    head = NULL;
    struct node* temp = createNode(arr[0]);
    head = temp;
    int length = sizeof(arr)/sizeof(arr[0]);

    for (int i = 1; i< length; i++){
        struct node* newNode= createNode(arr[i]);
        bool ans = addNode(newNode);
    }
    printList();
    printf("\n");
    //count print
    int num = counter();
    printf("Number of digits in list:%d",num);
    printf("\n");
    //deletenode
    struct node* del = findNode(96);
    deleteNode(del);
    printList();
    printf("\n");
    //delete largest
    deleteLargest();
    printList();
    printf("\n");
    //sort
    sort(head);
    printList();
    printf("\n");
    return 0;
}

