#include <stdio.h>

int main() {
    int n, k, x, cont, j;
    scanf("%d", &n);

    for(cont = 0; cont < n; cont++) {
        scanf("%d", &x);
        //printf("n: %d X: %d\n", n, x);

        for(j = 0; j < x; j++) {
            scanf("%d", &k);
            switch(k) {
                case 1:
                    printf("Rolien\n");
                    break;
                case 2:
                    printf("Naej\n");
                    break;
                case 3:
                    printf("Elehcim\n");
                    break;
                case 4:
                    printf("Odranoel\n");
                    break;

            }
        }
    }

    return 0;
}
