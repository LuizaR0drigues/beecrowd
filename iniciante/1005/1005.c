#include <stdio.h>
 
int main() {
 
    double a,b, aux;
 
    scanf("%lf %lf", &a,&b);
    aux = ((3.5*a + 7.5*b)/11);
    
    printf("MEDIA = %.5f\n", aux);
    return 0;
}
