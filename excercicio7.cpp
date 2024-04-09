#include <iostream>

//Crie um programa que pergunte ao usuário se deseja converter Celsius para  
//Fahrenheit ou Fahrenheit para Celsius. Em seguida, solicite a temperatura e faça a 
//conversão, imprimindo o resultado. Dica: Use fórmulas de conversão apropriadas: C = (F - 32) / 1.8 e F = (C * 1.8) + 32.

int main(){

    int num;
    int celsius;
    int fahrenheit;

    printf("Digite a sua temperatura em Celsius: ");
    scanf("%d", &num);

    celsius = (num - 32) / 1.8;

    printf("Sua converção fica %d\n", celsius);

    printf("Digite a sua temperatura em fahrenheit: ");
    scanf("%d", &num);

    fahrenheit = (num * 1.8) + 32;
    
    printf("Sua converção fica %d\n", fahrenheit);

    return 0;
}