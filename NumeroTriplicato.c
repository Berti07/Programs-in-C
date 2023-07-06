#include <stdio.h>

int main()
{
    int val;
    int cont;
    
    printf("inserisci numero: ");
    scanf("%d", &val);
    printf("inserisci numero: ");
    scanf("%d", &cont);
    
    printf("i numeri sono: ");
    
    for (int i=0; i<cont; i++){
        val=val*3;
        printf("%d, ", val);
    }
    return 0;
}
