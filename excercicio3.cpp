#include <iostream>

// Crie um programa que solicite ao usuário para inserir um número inteiro. Se o número for múltiplo de 3 e 5 ao mesmo tempo, imprima "É múltiplo de 3 e 5";
//caso contrário, imprima "Não é múltiplo de 3 e 5". Dica: Um número é múltiplo de 3 e 5 se for divisível por ambos.


int main(){

    int num; 

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 3 && 5 == 0) {
        printf("É múltiplo de 3 e de 5 %d\n", num);
    } else if (num != 3 && 5 == 0) {
        printf("Não é múltiplo de 3 e de 5 %d\n", num);
    }
    return 0;                           
}
