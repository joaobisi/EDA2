#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void remove_depois (celula *p) {
    if(p == NULL || p->prox == NULL) return 1;
    celula *item;
    item = p->prox;
    p->prox = item->prox;
    free(item);
    return 0;
}

void remove_elemento (celula *le, int x) {
    celula *ant, *pos;
    ant = le;
    pos = le->prox;
    while(pos != NULL && pos->dado != x) {
        ant = pos;
        pos = pos->prox;
    }
    if(pos != NULL) {
        ant->prox = pos->prox;
        free(pos);
    }
}

void remove_todos_elementos (celula *le, int x) {
    celula *ant, *pos, *item;
    ant = le;
    pos = le->prox;
    while(pos != NULL) {
        if(pos->dado == x) {
            item = pos;
            ant->prox = pos->prox;
            pos = pos->prox;
            free(item);
        } else {
            ant = pos;
            pos = pos->prox;        
        }
    }
} 
