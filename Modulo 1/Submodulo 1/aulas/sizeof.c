#include <stdio.h>

int main(){
    printf("Tamanho de int: %u bytes\n", sizeof(int));
    printf("Tamanho de long int: %u bytes\n", sizeof(long int));
    printf("Tamando de um long long int: %u bytes\n", sizeof(long long int));
    printf("Tamanho de double: %u bytes\n", sizeof(double));
    printf("Tamanho de um long double: %u bytes", sizeof(long double));

    return 0;
}