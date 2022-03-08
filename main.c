#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(){
    int n = 10;
    int item = 45; //new data value to be inserted.
    int index = 6; //index at which inserting the new node.
    printf("Welcome to Linked List program");
    printf("\n");
    createLinkedList(n);
    insertion(item,index);
    displayList();
    free_nodes();
}
