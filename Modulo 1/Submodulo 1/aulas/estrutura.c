#include <stdio.h> 

int valor;

void calcularPar(){
    printf("Digite um numero: ");
    scanf("%d", &valor);

    if (valor % 2 == 0)
    {
        return printf("%d é um numero par", valor);
    }else
        return printf("%d não é um numero par", valor);
}


int main(){
    calcularPar();
}