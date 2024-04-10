#include <iostream>

//Escreva um programa em C++ que solicite ao usuário inserir sua altura em
//metros e seu peso em quilogramas. O programa calculará o IMC (Índice de Massa 
//Corporal) com base nessas informações e imprimirá o resultado, juntamente com a 
//categoria correspondente de acordo com a tabela de classificação padrão.
//Instruções de Saída:
//Se o IMC for menor que 18.5, imprima "Categoria: Abaixo do peso".
//Se o IMC estiver entre 18.5 e menor que 25, imprima "Categoria: Peso normal".
//Se o IMC estiver entre 25 e menor que 30, imprima "Categoria: Sobrepeso".
//Se o IMC for 30 ou maior, imprima "Categoria: Obeso".

int main(){

    float altura;
    float peso;
    float imc;

    printf("Insira sua altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o seu peso em quilogramas: ");
    scanf("%f", &peso);

    altura = altura / 100; // <-- Aqui é para converter altura em centímetros ex: 182;

    imc = peso / (altura * altura); //<-- Aqui é a altura normal ex: 1.82

    if (imc < 18.5) {
        printf("Categoria abaixo do peso %.2f, %.2f, %.2f\n", altura, peso, imc);
    } else if ((imc >= 18.5) && imc < 25) {
        printf("Peso normal para %.2f, %.2f, %.2f\n", altura, peso, imc);
    } else if ((imc > 25) && imc < 30) {
        printf("Sobrepeso %.2f, %.2f, %.2f\n", altura, peso, imc);
    } else if (imc >= 30) {
        printf("Obeso %.2f, %.2f, %.2f\n", altura, peso, imc);
    }
    return 0;
}