#include <stdlib.h>
#include <stdio.h>

int main()
{
    int hin, minin, hfin, minfin, duH, duM;
    scanf("%d %d %d %d", &hin, &minin, &hfin, &minfin);


    duH = hfin - hin;
    duM = minfin - minin;
    if(duH <= 0 && duM <=0)
    {
        duH += 24;
    }


    if(duM <= 0)
    {
        duM += 60;
        duH --;

    }
    if(hin == hfin && minfin == minin)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duH, duM);

    }


return 0;
}
