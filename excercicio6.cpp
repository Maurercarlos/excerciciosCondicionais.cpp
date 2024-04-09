#include <iostream>

//Escreva um programa que solicite ao usuário para inserir um ano e verifique se é um
//ano bissexto ou não. Imprima "Ano bissexto" se for verdadeiro e "Não é ano bissexto" 
//caso contrário. Dica: Um ano é bissexto se for divisível por 4 e não for divisível por 
//100, exceto se também for divisível por 400.

int main(){

    int num;
    
    printf("Digite o seu ano: ");
    scanf("%d", &num);

    if (num % 4 == 0) {
        printf("Ano bissexto %d\n", num);
    } else if (num % 400 == 0) {
        printf("É ano bissexto %d\n", num);
    } else if (num != 100 == 0) {
        printf("Não é ano bissexto %d\n", num);
    }

return 0;
}