#include <stdio.h>

int main (){

    int val1;

    printf("inserisci valore: ");
    scanf("%d" , &val1);

    if(val1==1){
        printf("il mese e' Gennaio");
    }
    else if(val1==2){
        printf("il mese e' Febbraio");
    }
    else if(val1==3){
        printf("il mese e' Marzo");
    }
    else if(val1==4){
        printf("il mese e' Aprile");
    }
     else if(val1==5){
        printf("il mese e' Maggio");
    }
     else if(val1==6){
        printf("il mese e' Giugno");
    }
     else if(val1==7){
        printf("il mese e' Luglio");
    }
    else if(val1==8){
        printf("il mese e' Agosto");
    }
    else if(val1==9){
        printf("il mese e' Settembre");
    }
    else if(val1==10){
        printf("il mese e' Ottobre");
    }
    else if(val1==11){
        printf("il mese e' Novembre");
    }
    else if(val1==12){
        printf("il mese e' Dicembre");
    }
    else{
        printf("il mese non esiste");
    }

    return 0;
}