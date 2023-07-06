#include <stdio.h>

int main(){
    int x;

    printf("inserisci valore: ");

    scanf("%d" , &x);

    if (x>0) {
        printf("il numero e' maggiore di 0");
    } else if (x<0){
        printf("il numero e' minore di 0");
    } else {
        printf("il numero e' uguale a 0");
    }

    return 0;

}