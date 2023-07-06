#include <iostream>

int main(){

    // dichiarazione variabili
    int x; 
    
    // lettura variabili
    printf("inserisci valore: ");
    scanf("%d", &x);
    
    // operazioni
    int somma = x+1;
    int sottrazione = x-1;
    
    //stampa
    printf("valore: %d\nvalore +1: %d\nvalore -1: %d\n", x, somma, sottrazione);
    
    return 0;


}