#include <stdio.h>
#include <stdbool.h>

void exibirMensagem(const char* mensagem) {
    printf("%s\n", mensagem);
}

int main() {
    const int numeroCorreto = 69;
    const int maxTentativas = 5;
    int parar = 0;
    int numeroDigitado = 0;
    int tentativas = 0;
    bool acertou = false;

    while (parar == 0) {
        printf("Digite o número da sorte: ");
        scanf("%d", &numeroDigitado);
        if (numeroDigitado <= 0) {
            exibirMensagem("Você não pode adicionar números negativos ou zero!\n");
        }
        else {
        if (numeroDigitado == numeroCorreto) {
            acertou = true;
            tentativas++;
            printf("Você acertou o número da sorte é: %d em %d Tentativas!", numeroCorreto, tentativas);
            break;
        } else{
            exibirMensagem("Tente novamente!");
            tentativas ++;
            continue;
        }
    }
    }
    return 0;
}
