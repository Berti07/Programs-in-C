#include <stdio.h>

int main(){

    float val1;

    printf("inserisci valore: ");
    scanf("%f" , &val1);

    if(val1>1 && val1<5){
        printf("il voto e' estremamente insufficiente");
    }
    else if(val1>=5 && val1<6){
        printf("il voto e' insufficiente");
    }
    else if(val1>=6 && val1<7){
        printf("il voto e' sufficiente");
    }
    else if(val1>=7 && val1<8){
        printf("il voto e' buono");
    }
    else if(val1>=8 && val1<9){
        printf("il voto e' ottimo");
    }
    else if(val1<=9 && val1<=10){
        printf("il voto e' eccellente");
    }
    else if(val1<0 || val1>10){
        printf("il voto non e' valido");
    }

    return 0;

}