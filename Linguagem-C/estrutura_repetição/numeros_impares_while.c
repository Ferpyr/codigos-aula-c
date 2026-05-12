#include <stdio.h>

int main() {
    int i = 0; 

    printf("Imprimindo ímpares:\n");

    while (i <= 1000) {

        if (i % 2 != 0) {
            printf("\nImpar: %i", i);
        }

        i++;
    }

    return 0;
}