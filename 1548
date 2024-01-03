#include <stdio.h>
#include <stdlib.h>

//fila
void bubble(int *p, int m)
{
    int j, k, aux;

    for(j = 0; j < m-1; j++)
    {
        for(k = 0; k < m-1-j; k++)
        {
            if(p[k] < p[k+1])
            {
                aux = p[k];
                p[k] = p[k+1];
                p[k+1] = aux;
            }
        }
    }
}

int main()
{
    int n, m, *p, i, j, cont, *pO;
    // n casos de teste
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        // n de alunos/p
        scanf("%d", &m);

        p = malloc(m * sizeof(*p));
        pO = malloc(m * sizeof(*pO));
        for(j = 0; j < m; j++)
        {
            scanf("%d", &p[j]);
            pO[j] = p[j];
        }
        bubble(pO, m);
        cont = 0;
        for(j = 0; j < m; j++)
        {
            if(p[j] == pO[j])
            {
                cont++;
            }

        }

        printf("%d\n", cont);


        free(p);
        free(pO);
    }

    return 0;
}
