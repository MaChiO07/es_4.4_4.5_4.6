#include<stdio.h>
#include<math.h>

int main (void) {

    int i;

    for(i = 1; i<=20; i++) {
        printf("circonferenza ed area con raggio %d :\n\tcirconferenza : %f\n\tarea %f\n", i,2*3.14*i, 3.14*(int)pow(i, 2));
    }


    return 0;

}