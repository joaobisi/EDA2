#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void insere_inicio (celula *le, int x) {
    celula *nova = malloc(sizeof(celula));
    nova->dado = x;
    nova->prox = le->prox;
    le->prox = nova;
}

void insere_antes (celula *le, int x, int y) {
   celula *ant, *pos, *nova;
   nova = malloc (sizeof (celula));
   nova->dado = x;
   ant = le;
   pos = le->prox;
   while (pos != NULL && pos->dado != y) {
      ant = pos;
      pos = pos->prox;
   }
   nova->prox = pos;
   ant->prox = nova;
}
