#include <stdio.h>
 
int main() {
    char nome[10];
    double a, b, aux;
    
    scanf("%s %lf %lf", nome, &a, &b);
    aux = (0.15*b)+a;
    
    printf("TOTAL = R$ %.2f\n", aux);
    
    
 
    return 0;
}
