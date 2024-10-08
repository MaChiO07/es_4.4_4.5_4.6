#include<stdio.h>

int main(void) {


    // dichiarazione variabili 
    int marks;
    int marks_somma = 0;
    int marks_quantity = -1;
    int marks_controll;
    float media;

    // menu e regole
    printf("--CALCOLA MEDIA-- \n");
    printf("--Per calcolare la media inserisci 1-- \n");
    printf("--Per terminare inserisci 0-- \n");
    scanf("%d", &marks);
    

    
    if(marks == 1) {
        while(marks > 0) {
        printf("Inserire numero: ");
        scanf("%d", &marks);
        marks_quantity = marks_quantity + 1;
        marks_somma += marks;
    }
    }

    else {
        printf("opzione scelta e` sbagliata! \n");
    }


    // stampa media 
    media = (float)marks_somma/marks_quantity;
    printf("Media dei voti: %g \n", media);

    // controllo dei dati 
    //printf("marks quantity: %d \n", marks_quantity);
    //printf("marks_somma: %d \n", marks_somma);


    return 0;

}