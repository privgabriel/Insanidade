#include <stdio.h>

void calcula(int* c2) {

    printf("Calcula %d\n", (*c2));
    (*c2)++;
    printf("Calcula %d %d\n", (*c2));
}

int main() {

    int c = 10;

    printf("Endereço: %d\n", &c);
    printf("main %d\n", c);
    calcula(&c);
    printf("main %d\n", c);

}