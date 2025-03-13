#include <stdio.h>
 
int main() {
    int regularNumber = 2147483647; // Valor máximo de int
    long long int bigNumber = 2147483647;
 
    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);
 
    bigNumber++; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", bigNumber);
 
    return 0;
}