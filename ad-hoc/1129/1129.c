#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, a, c, b,d,e, i;

    while(1)
    {
        scanf("%d", &num);
        if(num == 0)
        {
            break;
        }
        for(i=0; i<num; i++)
        {
            scanf("%d %d %d %d %d", &a, &b, &c,&d,&e);
            int cont =0;

            if(a<= 127)
            {
                cont++;
                a=1;
            }
            else
                a=0;
            if(b<= 127)
            {
                cont++;
                b=1;
            }
            else
                b=0;

            if(c<= 127)
            {
                cont++;
                c=1;
            }
            else
                c=0;
            if(d<= 127)
            {
                cont++;
                d=1;
            }
            else
                d=0;
            if(e<= 127)
            {
                cont++;
                e=1;
            }
            else
                e=0;
            if(cont == 1)
            {
                if(a==1)
                {
                    printf("A\n");
                }
                if(b==1)
                {
                    printf("B\n");
                }
                if(c==1)
                {
                    printf("C\n");
                }
                if(d==1)
                {
                    printf("D\n");
                }
                if(e==1)
                {
                    printf("E\n");
                }
            }
            else{
                printf("*\n");
            }
        }


    }

    return 0;
}
