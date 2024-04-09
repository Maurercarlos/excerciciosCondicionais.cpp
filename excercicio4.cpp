#include <iostream>

//Escreva um programa que solicite ao usuário para inserir três números inteiros representando os lados de um triângulo.
//O programa deve classificar o triângulo como "Equilátero" se todos os lados forem iguais, "Isósceles" se dois lados forem iguais, 
//ou "Escaleno" se todos os lados forem diferentes. Dica: Um triângulo é equilátero se todos os lados forem iguais.

int main(){

    int num1;
    int num2; 
    int num3; 

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    printf("Digite um número inteiro: ");
    scanf("%d", &num2);

    printf("Digite um número inteiro: ");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3) {
        printf("Equilátero %d e %d e %d\n", num1, num2, num3);
    } else if ((num1 == num2 && num2 != num3) {
        printf("Isósceles %d e %d e %d\n", num1, num2, num3);
    } else (num1 != num2 != num3!= 0) {
        printf("Escaleno %d e %d e %d\n", num1, num2, num3);
    }
    return 0;
}