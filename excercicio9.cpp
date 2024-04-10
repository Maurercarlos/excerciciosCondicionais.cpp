#include <iostream>

//Escreva um programa que solicite ao usuário para inserir as coordenadas (x, y) 
//de um ponto no plano cartesiano. O programa deve determinar e imprimir em qual  
//quadrante o ponto está localizado. Dica: Use condicionais if e operadores lógicos 
//para verificar em qual quadrante o ponto está. 

int main(){

    float x;
    float y;

    printf("Digite a sua coordenada: ");
    scanf("%f", &x);

    printf("Digite a sua segunda coordenada: ");
    scanf("%f", &y);

    if (x < y) {
        printf("Sua coordenada é igual a 0 %f, %f\n", x, y);
    } else if (x > y) {
        printf("Coordenada %f, %f\n", x, y);
    } else if (x == y) {
        printf("Coordenada %f, %f\n", x, y);
    } else if (x != 3) {
        printf("Coordenada %f, %f", x, y);
    }
    return 0;
}