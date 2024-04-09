#include <iostream>

//Crie um programa que solicite ao usuário para inserir dois números e uma operação 
//matemática (+, -, *, /). O programa deve executar a operação e imprimir o resultado. 
//Dica: Você pode usar uma instrução switch para realizar a operação selecionada.

int main(){

    int num1;
    int num2;

    printf("Digite seu número: ");
    scanf("%d", &num1);

    printf("Digite o seu segundo número: ");
    scanf("%d", &num2);

    if (num1 + num2) {
        printf("Soma de %d e %d\n", num1, num2);
    } else if (num1 * num2) {
        printf("Multiplicação de %d e %d\n", num1, num2);
    } else if (num1 - num2) {
        printf("Subtração de %d e %d", num1, num2);
    } else if (num1 / num2) { 
        printf("Divisão de %d e %d\n", num1, num2);
    } else {
        printf("Erro de conta");
    }
    return 0;
}