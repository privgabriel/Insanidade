#include <stdio.h>
#include <stdbool.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    int inteiro = 10;
    float decimal = 3.14f;
    double grandeDecimal = 2.71828;
    char letra = 'G';
    char nome[] = "Gabriel";
    bool ativo = true;

    struct Pessoa usuario = {"Gabriel", 22};
    int* ponteiro = &inteiro;

    int inteiroEx1 = 6;
    int inteiroEx2 = 2;

    double converterInteiro = (double)inteiroEx1 / (double)inteiroEx2;

    printf("Nome: %s\n", usuario.nome);
    printf("Idade: %d\n", usuario.idade);
    printf("Número: %d, Ponto flutuante: %.2f\n", inteiro, decimal);
    printf("Letra: %c, Booleano: %d\n", letra, ativo);
    printf("Endereço de 'inteiro': %p\n", (void*)ponteiro);
    printf("Conversão do inteiro: %.0f\n", converterInteiro);

    return 0;
}
