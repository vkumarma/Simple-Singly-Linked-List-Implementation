#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void createLinkedList(int n){
    struct node *fnNode, *current;
    for(int i = 1;i <= n;i++){
        if (i == 1){
        head = (struct node*)malloc(sizeof(struct node));
        head->data = i;
        head->nextptr = NULL;
        current = head;
        }
        else{
            fnNode = (struct node*)malloc(sizeof(struct node));
            fnNode->data = i;
            fnNode->nextptr = NULL;
            current->nextptr =fnNode; //linking taking place.
            current = current->nextptr;
        }

    }

}

void insertion(int item,int index){
    struct node *newNode, *current, *previous;
    int i = 1;
    current = head;
    previous = NULL;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = item;
    while(current != NULL){
        if(i == index){
            if(previous == NULL){
                newNode->nextptr = current;
                head = newNode;
            }
            else{
                newNode->nextptr = current;
                previous->nextptr = newNode;
            }
        }
        i += 1;
        previous = current;
        current = current->nextptr;

    }

}

void displayList(){
    struct node *current;
    if(head == NULL){
        printf("List is empty");
    }
    else{
        current = head;
        while (current != NULL){
            printf(" Data = %d\n", current->data);
            current = current->nextptr;
        }
    }
}

void free_nodes(){
    struct node* current;
    while (head != NULL)
    {
       current = head;
       head = head->nextptr;
       free(current);
    }
}


