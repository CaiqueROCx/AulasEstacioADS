#include <stdio.h>

int main(){
    int idade;
    float altura;
    char nome[50];
    int matricula;

    printf("Digite sua idade :\n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Aluno é: %s \nMatrícula: %d\n", nome, matricula);
    printf("Idade: %d \nAltura: %.2f", idade, altura);

    return 0;
}