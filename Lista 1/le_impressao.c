#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void imprime (celula *le) {
    celula *no;
    for(no = le->prox; no != NULL; no = no->prox) printf("%d -> ", no->dado);
    printf("NULL\n");
}

void imprime_rec (celula *le) {
    celula *no;
    if(le->prox != NULL) {
        no = le->prox;
        printf("%d -> ", no->dado);
        imprime_rec(le->prox);
    } else {
        printf("NULL\n");
    }
}
