#include <stdio.h>

int main()
{
    int val;
    int cont=2;
    
    printf("num= " );
    scanf("%d", &val);
    
    while(cont<=10)
    {
        printf("%d, ", val*cont);
        cont++;
    }
    

    return 0;
}
