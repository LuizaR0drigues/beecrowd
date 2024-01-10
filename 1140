#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[1000],first;
    int i,tam;
    while(1)
    {
        fgets(frase,1000, stdin);
        if(frase[0] == '*')
            break;
        first = tolower(frase[0]);
        //printf("%c\n", first);
        tam = strlen(frase);
        //printf("%d\n", tam);

        for(i=0; i<tam;i++)
        {
            //printf("%c\n", frase[i-1]);
            if(frase[i-1] ==' ' && tolower(frase[i]) != first)
                break;
        }
            if(i == tam)
                printf("Y\n");
            else
                printf("N\n");

    }
    return 0;
}
