#include <stdio.h>

int main (){

    int val1;
    int x=1;
    printf("inserisci valore: ");
    scanf("%d", &val1);

    while(x<=val1){
        printf("x = %d\n", x);
        x++;
    }
}