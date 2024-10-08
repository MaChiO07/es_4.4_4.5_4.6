#include<stdio.h>

int main(void) {
    
    int i = 1;
    int products;
    float price_of_product;
    float total_price = 0;


    printf("--Calcolo del aquisto in un negozio-- \n");
    printf("inserire numero dei prodotti: ");
    scanf("%d", &products);
    

    while(i<=products) {
        printf("inserire prezzo del prodotto numero %d: ", i);
        scanf("%f", &price_of_product);
        total_price += price_of_product;
        i++;
    }


    printf("Numero dei prodotti: %d \n", products);
    printf("Prezzo totale: %g", total_price);

    return 0;
}