#include <stdio.h>
#include <stdlib.h>

/*
* Let's define the struct for the Linked List ADT
*/
typedef struct LLnode {
  // Stores the value of this node
  int value;

  // Pointers to the prev & next node
  struct LLnode *prev;
  struct LLnode *next;
} Node;


Node *newNode(int value) {

  // We need to allocate space for our data!
  Node *node = calloc(1, sizeof(Node));

  // Let's save the value of the node
  node->value = value;

  // but we don't know yet what nodes are next to it.
  node->prev = NULL;
  node->next = NULL;

  return node;
}

Node *insert(Node *a, int value){
  // We need to get to the tail!
  while(a->next != NULL){
    a = a->next;
  }
  
  // Now a is at the end of the list we can create the new node
  Node *tail = newNode(value);

  // Set the next and prev updates
  a->next = tail;
  tail->prev = a;
}

void printList(Node *a){

  int i = 0;
  // Traverse through the linked list
  while(a != NULL){
    // Get the value
    printf("The %dth value of the Linked List is: %d\n", i, a->value);
    a = a->next;
    i++;
  }
}

void delete(Node *a, int value){

  // Find the node to be deleted or do nothing if cannot be found
  while(a != NULL && a->value != value){
    a = a->next;
  }
  // When we get here, either a is the tail or a->value == value
  if(a != NULL){
    // We remove it from the linked list
    Node *temp = a;
    a->prev->next = a->next;
    a->next->prev = a->prev;
    //We should delete the temp because it can cause memory leaks
    free(temp);
  }
}


int main(){
  Node *x = newNode(10);
  
  //NewNode working check
  printf("%d\n",x->value);
  insert(x, 11);
  //Insert working check
  printf("%d\n", x->next->value);


  insert(x, 16);
  insert(x, 14);
  insert(x, 13);
  insert(x, 33);

  delete(x, 14);

  //The insert and delete return node to root but we dont use it rn cuz yolo
  printList(x);

  return 0;
}