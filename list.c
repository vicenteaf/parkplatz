List* createList(){

    List* L = (List*)malloc(sizeof(List));

    L->current = NULL;
    L->size = 0;
    L->first = NULL;
    L->last = NULL;

    return L;
}

node* createNode(void *data){

    node* n = (node*)malloc(sizeof(node));

    n->data = data;
    n->next = NULL;
    n->prev = NULL;

    return n;
}

void first(List* list){

    list->current = list->first;
}

void last(List* list){

    list->current = list->last;
}

void* current(List* list){

    if(list->current == NULL) return NULL;

    return list->current->data;
}

void next(List* list){

    if(list->current == NULL || list->current->next == NULL) return;

    list->current = list->current->next;

}

void prev(List* list){

    if(list->current == NULL || list->current->prev == NULL) return;

    list->current = list->current->prev;

}

int EOL(List* list){

    if(list->current == NULL || list->current->next == NULL) return 1;

    return 0;
}

int listSize(List* list){

    return list->size;

}

void pushFront(List* list, void* data){

    list->current = createNode(data);

    if(list->size == 0){
        list->last = list->current;
    }else{
        list->current->next = list->first;
        list->first->prev = list->current;
    }

    list->first = list->current;
    list->size++;

}

void pushBack(List* list, void* data){

    list->current = createNode(data);

    if(list->size == 0){
        list->first = list->current;
    }else{
        list->current->prev = list->last;
        list->last->next = list->current;
    }

    list->last = list->current;
    list->size++;

}

void pushCurrent(List* list, void* data){

    if(list->current == NULL){
        pushFront(list,data);
        return;
    }

    if(list->current->next == NULL){
        pushBack(list,data);
        return;
    }

    if(list->current->prev == NULL){
        pushFront(list,data);
        return;
    }

    node* n = createNode(data);

    list->current->next->prev = n;
    list->current->next = n;

    n->next = list->current->next;
    n->prev = list->current;

    list->current = n;
    list->size++;

}

void popFront(List* list){

    if(list->first == NULL) return;

    if(list->size == 1){
        free(list->first);
        list->first = NULL;
        list->current = NULL;
        list->last = NULL;
    }else{
        list->first = list->first->next;
        free(list->first->prev);
        list->first->prev = NULL;
    }

    list->size--;

}

void popBack(List* list){

    if(list->last == NULL) return;

    if(list->size == 1){
        free(list->last);
        list->first = NULL;
        list->current = NULL;
        list->last = NULL;
    }else{
        list->last = list->last->prev;
        free(list->last->next);
        list->last->next = NULL;
    }

    list->size--;

}

void popCurrent(List* list){

    if(list->current == NULL) return;

    if(list->current->next == NULL){
        popBack(list);
        return;
    }

    if(list->current->prev == NULL){
        popFront(list);
        return;
    }

    list->current->next->prev = list->current->prev;
    list->current->prev->next = list->current->next;

    node* aux = list->current;
    list->current = list->current->prev;
    free(aux);

    list->size--;

}
