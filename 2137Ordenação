#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *vet, int tam)
{
    int i,j,min, x;
    for(i=0; i<=tam; i++)
    {
        min =i;
        for(j=i+1; j<tam; j++)
        {
            if(vet[j]<vet[min])
            {
                min=j;
            }
        }
        x=vet[min];
        vet[min]=vet[i];
        vet[i]=x;

    }
}
int main()
{

    int n, *vet, i;




    while(scanf("%d",&n)!= EOF)
    {
        for(i=0; i<n; i++)
        {
            vet=malloc(n*sizeof*vet);

        }
        for(i=0; i<n; i++)
        {
            scanf("%d",&vet[i]);

        }
        selectionSort(vet, n);
        printf("\n\n");
        for(i=0; i<n; i++)
        {
            printf("%04d\n",vet[i]);
        }

    }




    return 0;
}
