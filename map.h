#ifndef _MAP_H_
#define _MAP_H_

#include <stdlib.h>
#include "list.h"

typedef struct nodo{
  long key;
  void* data;
}hashElem;

typedef struct{
  hashElem** hashArray;
  int size;
  int capac;
}HashMap;

HashMap* createMap();  //crea un nuevo mapa

void insert(HashMap* map, long key, void* data);  //inserta un elemento en el mapa
void delete(HashMap* map, long key);  //elimina un elemento del mapa
void* search(HashMap* map, long key);  //busca un elemento en el mapa

int hash(char *str, int capac);  //funcion hash en base a multiplicacion por numero racional
void enlarge(HashMap* map);  //agranda el mapa cuando esta lleno en un 70%

#endif
