#include <stdio.h>

int main(){

    int val1;
    int x=1;

    printf("inserisci valore: ");
    scanf("%d", &val1);

    printf("x = %d\n", x);
    x++;

    while(x<=val1){
        printf("x = %d\n", x);
        x = x+2;  // x+=2;
    }
    
    return 0;
}