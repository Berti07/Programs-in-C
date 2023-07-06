#include <stdio.h>

int main(){

    float val1;
    float val2;
    float val3;

    printf("inserisci primo valore: ");
    scanf("%f", &val1);
    printf("inserisci secondo valore: ");
    scanf("%f", &val2);
    printf("inserisci terzo valore: ");
    scanf("%f", &val3);

    if(val1==val2 && val1==val3){
        printf("il triangolo e' equilatero");
    }
    else if( (val1==val2 && val1!=val3) || (val2==val3 && val2!=val1) || (val1==val3 && val1!=val2) ){
        printf("il triangolo e' isoscele");
    }
    else if(val1!=val2 && val1!=val3 && val2!=val3){
        printf("il triangolo e' scaleno");
    }
    else if (val1*val1+val2*val2==val3*val3 || val2*val2+val1*val1==val3*val3 || val3*val3+val1*val1==val2*val2){
        printf("il triangolo e' rettangolo");
    }
    else{
        printf("il triangolo non esiste");
    }
   

    return 0;
}
