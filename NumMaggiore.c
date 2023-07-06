#include <stdio.h>

int main(){

    int val1;
    int val2;
    int val3;

    printf("inserisci primo valore: ");
    scanf("%d" , &val1);
    printf("inserisci secondo valore: ");
    scanf("%d" , &val2);
    printf("inserisci terzo valore: ");
    scanf("%d" , &val3);


    if(val1>=val2 && val1>=val3 ){ //val1 e' maggiore di val2 e contemporaneamente maggiore di val3
        printf("il numero maggiore e': %d", val1);
    }
    else if(val2>=val1 && val2>=val3){
        printf("il numero maggiore e': %d" , val2);
    }
    else{
        printf("il numero maggiore e': %d" , val3);
    }
    
    return 0;
}