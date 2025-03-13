#include <stdio.h>

int main()
{
    int idade;
    float altura;
    char opcao;
    char nome[20];
    //sintaxe scanf
    // scanf("formato1" "formato2, &variavel1, variavel2, ...")

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);
    printf("Digite sua opção: ");
    scanf(" %c", &opcao);
    printf("A opção é: %c", opcao);
    /*
    printf("%formato1 %formato2 %formato3", varaivel1 variavel2 variavel3)
    */

}
