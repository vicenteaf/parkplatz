#ifndef _MAP_H_
#define _MAP_H_


typedef struct nodo{
  char key[10];
  void* data;
}hashElem;

typedef struct{
  hashElem** hashArray;
  int size;
  int capac;
}HashMap;

HashMap* createMap();  //crea un nuevo mapa

void insert(HashMap* map, char *key, void* data);  //inserta un elemento en el mapa
void delete(HashMap* map, char *key);  //elimina un elemento del mapa
void* search(HashMap* map, char *key);  //busca un elemento en el mapa

int hash(char *str, int capac);  //funcion hash en base a multiplicacion por numero racional
void enlarge(HashMap* map);  //agranda el mapa cuando esta lleno en un 70%

#include "map.c"
#include "list.h"
#endif
