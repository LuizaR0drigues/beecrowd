#include <stdio.h>

int main() {

    double num1, num2, num3, num4, aux, aux2;

    scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);
    aux = (num1*2+num2*3+num3*4+num4*1)/10;


    if(aux >= 7.0)
    {
        printf("Media: %.1f\n", aux);
        printf("Aluno aprovado.\n");
    }
    else if(aux>= 5.0 && aux <= 6.9)
    {
        scanf("%lf", &aux2);
        printf("Media: %.1f\n", aux);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", aux2);
        if(((aux2+aux)/2.0) >= 5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", (aux2+aux)/2.0);
        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media Final: %.1f\n", aux);

        }
    }
    else
    {
        printf("Media: %.1f\n", aux);
        printf("Aluno reprovado.\n");
    }

    return 0;
}
