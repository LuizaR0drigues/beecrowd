#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,g,i,s;
    
    while(1)
    {
         scanf("%d %d",&g, &p);
        if( p == 0 && g ==0)
            break;
       for(i=0; i<g; i++)
       {
          for(j=0; j<p; j++)
          {
              scanf("%d%*c",&corrida[i][j]);
          }
       }
       scanf("%d",&s);
       for(i=0; i<s; i++)
       {
           scanf("%d%*c",&points[i]);
       }
       for( i=0; i<g;i++)
       {
           for(j=0; j<p; j++)
           {
               pontos[j]+=points[corrida[i][j]-1];
           }
       }
       int maior=0;
       for(i=0; i<p;i++)
       {
           if(pontos[i]>maior)
           {
               maior = pontos[i];
           }
       }
       for(i=0; i<p;i++)
       {
           if(pontos[i] ==maior)
           {
               printf("%d", i+1);
           }
           else
            printf(" %d",i+1);
       }
       
    printf("\n");
        
    }
    return 0;
}
