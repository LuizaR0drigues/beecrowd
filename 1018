#include <stdio.h>

int main() {
    int value;
    scanf("%d", &value);

    if(value > 0 && value < 1000000) {
        int notas[7] = {100, 50, 20, 10, 5, 2, 1};
        int numNotas = 7;

        printf("%d\n", value);
        for(int i = 0; i < numNotas; i++) {
            int qtd = value/notas[i];

            printf("%d nota(s) de R$ %d,00\n", qtd, notas[i]);
            value = value % notas[i];
        }
    }

    return 0;
}
