#include <stdio.h>

#define MAX 1000

void insertionSort(int *v, int l, int r) {
    int aux;
    for(int i = r; i > l; i--) {
        if(v[i] < v[i-1]) {
                aux = v[i];
                v[i] = v[i-1];
                v[i-1] = aux;
            }
    }
    for(int i = l+2; i <= r; i++) {
        int j = i;
        int aux2 = v[j];
        while(aux2 < v[j-1]) {
            v[j] = v[j-1];
            j--;
        }
        v[j] = aux2;
    }
}

int main() {
    int i = 0;
    int j = 0;
    int num;
    int v[MAX] = {};

    while(scanf("%d", &num) != EOF) {
        v[i] = num;
        i++;
    }

    insertionSort(v, 0, i-1);

    while(j < i) {
        printf("%d ", v[j]);
        j++;
    }
    printf("\n");

    return 0;
}