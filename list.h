#ifndef _LIST_H_
#define _LIST_H_

#include <stdlib.h>

typedef struct node{
    void* data;
    struct node* next;
    struct node* prev;
} node;

typedef struct{
    node* current;
    int size;
    node* first;
    node* last;
}List;

List* createList(); //crea nueva lista
node* createNode(void *data); //crea nuevo nodo

void first(List* list);  //cambia el current al primer elemento de la lista
void last(List* list);  //cambia el current al ultimo elemento de la lista
void* current(List* list);  //retorna el dato en el nodo actual
void next(List* list);  //cambia el current al siguiente elemento en la lista
void prev(List* list);  //cambia el current al elemento anterior en la lista

int EOL(List* list);  //retorna 1 si se llego al final de la lista
int listSize(List* list);  //retorna el tamaño de la lista

void pushFront(List* list, void* data);  //introduce un nuevo nodo al comienzo de la lista
void pushBack(List* list, void* data);  //introduce un nuevo nodo al final de la lista
void pushCurrent(List* list, void* data);  //introduce un nuevo nodo en el elemento actual de la lista

void popFront(List* list);  //elimina el primer elemento de la lista
void popBack(List* list);  //elimina el ultimo elemento de la lista
void popCurrent(List* list);  //elimina el elemento en la posicion actual de la lista

#endif
