#include <stdio.h>
#include <stdlib.h>

// Função de ordenação por inserção
void insert(int *vet, int tam)
{
    int i, j, x;
    for(i=1; i<tam; i++)
    {
        x = vet[i];
        j = i-1;
        while(j >= 0 && x < vet[j]){
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = x;
    }
}
int compare(int*a , int*b)
{
    return(*(int*)a -*(int*)b);
}
int main()
{
    int *vet, *par, *impar;
    int n, i, contp = 0, contimp = 0;

    scanf("%d",&n);
    vet = (int*)malloc(n*sizeof(int));
    par = (int*)malloc(n*sizeof(int));
    impar = (int*)malloc(n*sizeof(int));

    for(i=0; i<n; i++)
    {
        scanf("%d", &vet[i]);
        if(vet[i]%2 ==0)
        {
            par[contp] = vet[i];
            contp++;
        }
        else
        {
            impar[contimp] = vet[i];
            contimp++;
        }
    }


    qsort(par, contp,sizeof(int),compare);
    qsort(impar, contimp,sizeof(int), compare);
    for(int i=0; i<contp; i++)
    {
        printf("%d\n", par[i]);
    }
    for(int i=contimp-1; i>=0; i--)
    {
        printf("%d\n", impar[i]);
    }

    free(vet);
    free(par);
    free(impar);

    return 0;
}
