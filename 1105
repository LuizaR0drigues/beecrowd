#include <stdio.h>
#include <stdlib.h>
#define MAX 21
int main()
{

    int b, n, r[MAX],i,c,d,v, aux ;
    while(1)
    {
        scanf("%d %d",&b,&n);
        aux =1;
        if(b == 0)
            break;
        for(i=1; i<=b; i++)
        {
            scanf("%d%*c",&r[i]);
        }
        for(i=1; i<=n; i++)
        {
            scanf("%d %d %d",&d,&c,&v);
            r[d] -= v;
            r[c] += v;
        }
        for(i=1; i<=b; i++)
        {
            if(r[i]<0)
            {
                aux =0;
                break;
            }

        }
            if(aux == 0)
                printf("N\n");
            else
                printf("S\n");

    }
    return 0;
}

