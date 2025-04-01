#include <stdio.h>

void calcular(int* a, int* b) {
    int soma = (*a + *b);
    printf("Calcula %d + %d = %d\n", (*a), (*b), soma );
}

int main() {
    int numeroUm = 0;
    int numeroDois = 0;

    printf("Escolha o primeiro número:");
    scanf("%d", &numeroUm);
    printf("Escolha o segundo número:");
    scanf("%d", &numeroDois);

    calcular(&numeroUm, &numeroDois);
}
