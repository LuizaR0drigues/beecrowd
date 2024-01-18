#include <stdio.h>
#include <ctype.h>

int main()
{
    int n,i,x,y,aux=0;
    char var;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d%c%d",&x,&var,&y);

        if( x==y)
            aux = x*y;

        else if(!isupper(var))
            aux = x+y;
        else
            aux = y-x;
        
        printf("%d\n",aux);

    }
return 0;
}
