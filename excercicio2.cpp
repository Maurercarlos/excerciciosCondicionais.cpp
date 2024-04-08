#include <iostream>

//Escreva um programa que peça ao usuário para inserir um número inteiro. Se o número for positivo,
//imprima "Positivo"; caso contrário, imprima "Negativo". Dica: Um número é positivo se for maior que zero.

int main(){
    
    int num;

printf("Digite o seu número inteiro: ");
scanf("%d", &num);

if ( num > 0) {
    printf("Seu número é positivo %d\n", num);
} else if (num < 0) {
    printf("Seu número é negativo %d\n", num);
}
return 0;
}