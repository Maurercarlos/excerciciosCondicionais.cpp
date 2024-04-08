#include <iostream>

int main(){

    //Escreva um programa em C++ que solicite ao usuário para digitar um número inteiro. Em seguida,
    //o programa deve verificar se o número é par e imprimir "Par" se for verdadeiro, e "Ímpar" se for falso. 
    //Dica: Um número é par se o resto da divisão por 2 for igual a zero.

    int num;

    printf("Digite o seu número: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Seu número é par %d\n", num);
    } else if ((num % 2) != 0) {
        printf("Seu número é impar %d\n", num);
    }
    return 0; 
}
