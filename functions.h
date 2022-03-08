#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
struct node
{
    int data;
    struct node *nextptr;
}*head;

void createLinkedList(int n);
void insertion(int item,int index);
void displayList();
void free_nodes();


#endif // FUNCTIONS_H_INCLUDED
