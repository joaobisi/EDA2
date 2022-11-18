#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *busca (celula *le, int x) {
    celula *no = malloc(sizeof(celula));
    no = le->prox;
    while(no != NULL && no->dado != x) no = no->prox;
    return no;
}

celula *busca_rec (celula *le, int x) {
    celula *no = malloc(sizeof(celula));
    no = le->prox;
    if(no == NULL) return NULL;
    if(no->dado == x) return no;
    return busca_rec(le->prox, x);
}
