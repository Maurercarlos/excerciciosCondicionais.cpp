#include <iostream>

//Escreva um programa em C++ que recebe do usuário um número de leads 
//que a empresa recebeu nesse dia e verifica se a quantidade é baixa (5 ou menos),  
//esperada (6 a 10) ou alta (11+) e escreve na tela essa indicação.


int main(){

    int leads;

    printf("Digite a quantidade de leads: ");
    scanf("%d", &leads);

    if (leads <= 5) { 
        printf("Quantidade baixa %d\n", leads);
    } else if ((leads = 6) && leads < 10) {
        printf("Quantidade desejada %d\n", leads);
    } else if ((leads = 11) && leads > 11) {
        printf("Quantidade alta %d\n", leads);
    } 
    return 0;
}