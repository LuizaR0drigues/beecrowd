#include <stdio.h>

int main()
{
    double valord;
    int valor, nota[6] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[7] = {100,50, 25, 10, 5, 1};
    int qtd;

    scanf("%lf", &valord);
    valor = valord * 100;

    /*if(valor> 0 && valor< 1000000.00)
    {*/
        printf("NOTAS:\n");
        for(int i = 0; i < 6; i++)
        {
            qtd = valor / nota[i];
            printf("%d nota(s) de R$ %.2f\n", qtd, (nota[i] / 100.0));
            valor %= nota[i];
        }

        printf("MOEDAS:\n");
        for(int j = 0; j < 6; j++)
        {
            qtd = valor / moedas[j];
            printf("%d moeda(s) de R$ %.2f\n", qtd, (moedas[j] / 100.0));
            valor %= moedas[j];
        }

    /*}
    else
        return 0;*/

    return 0;
}
