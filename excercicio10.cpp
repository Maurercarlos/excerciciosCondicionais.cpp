#include <iostream>

//Escreva um programa em C++ que serve como verificação de saldo em um 
//banco. Defina uma variável para ser o saldo do cliente e peça que ele digite a quantia  
//que quer retirar no caixa. O algoritmo deve verificar se o cliente possui esse saldo. Se 
//sim, escreva na tela que pode fazer uma retirada, se não avise que o saldo é menor 
//que o valor solicitado.

int main(){

    int saldo;

    printf("Digite a quantidade que deseja: ");
    scanf("%d", &saldo);

    if (saldo >= 1) {
        printf("Você tem saldo para sacar, no valor de: %d\n", saldo);
    } else if (saldo < 1) {
        printf("Saldo indisponível: %d\n", saldo);
    }
    return 0;
}