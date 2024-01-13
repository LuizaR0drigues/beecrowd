#include <stdio.h>
#include <stdlib.h>

int main() {

    int a,b,c,d, s1, s2;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    s1= (a+b);
    s2 = (c+d);
    if(b > c && d > a && c>0 && d>0 && s2 > s1 && a%2 == 0)
    {
         printf("Valores aceitos\n");
    }
        
    else{
        printf("Valores nao aceitos\n");
    }


    return 0;
}
