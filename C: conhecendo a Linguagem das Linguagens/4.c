#include <stdio.h>

int main() {

    int respostaUsuario;

    int numeroCorreto = 69;

    printf("Qual é o número secreto?\n");

    scanf("%d", &respostaUsuario);

    if (respostaUsuario == numeroCorreto) {
        printf("Acertou o número é %d\n", numeroCorreto);
    }
    else {
        printf("Número errado tente novamente!\n");
    }
}