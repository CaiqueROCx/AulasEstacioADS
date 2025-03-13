#include <stdio.h>

int main (){
    float nota1, nota2, nota3, media;

    printf("Digite o valor da primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite o valor da segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite o valor da terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média do aluno é: %.2f", media);
}