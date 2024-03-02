#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void imprimeVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void troca(int v[], int a, int b) {
    int tmp = v[a];
    v[a] = v[b];
    v[b] = tmp;
}

void bubbleSort(int v[], int n) {
    int trocou;
    for (int i = 0; i < n - 1; i++) {
        trocou = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                troca(v, j, j + 1);
                trocou = 1;
            }
        }
        if (trocou == 0) {
            break;
        }
    }
}

void geraVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = rand() % n;
    }
}

int main() {
    srand(time(NULL));
    int n = 50000;
    int v[n];

    geraVetor(v, n);

    imprimeVetor(v, n);
    bubbleSort(v, n);
    imprimeVetor(v, n);

    return 0;
}
