#include <stdio.h>

// Aqui está a função potencia com comentários
void potencia(int* resultado, int a, int b) {
    *resultado = 1;  // Inicializa o resultado com 1
    for(int i = 0; i < b; i++) {
        *resultado = *resultado * a;  // Multiplica 'a' por ele mesmo 'b' vezes
    }
}

int main() {
    int res;           // Variável para guardar o resultado
    potencia(&res, 2, 3); // Chama a função para calcular 2^3, passando o endereço de 'res'
    printf("Resultado: %d\n", res);  // Exibe o resultado: 8
    return 0;
}
