#include <stdio.h>

int main (){

    /*
    while (condizione) {
        //entro qundo la condizione e' vera
    }
    */
    int i=0;
    while (i < 10) {
        printf("Ciao Mondo!\n");
        //sleep(1);
        i++; // i = i + 1;
   }

    int val1=0;
    while(val1<15){
        printf("%d ", val1);
        val1++;
    }

    printf("\n");

    val1 = 0;
    int val2;
    int somma = 0;
    while(val1<5){
        scanf("%d", &val2);
        somma = somma + val2;
        val1++;
    }
    printf("somma = %d", somma);

    printf("\nTerminato\n");

   return 0;
}