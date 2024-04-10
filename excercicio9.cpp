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

    if ((x < 0) && y > 0) {
        printf("Sua coordenada esta no primeiro quadrante. %f, %f\n", x, y);
    } else if ((x < 0) && y > 0) {
        printf("Sua coordenada está no segundo quadrante. %f, %f\n", x, y);
    } else if ((x < 0) && y < 0) {
        printf("Sua coordenada está no terceiro quadrante. %f, %f\n", x, y);
    } else if ((x < 0) && y > 0) {
        printf("Sua Coordenada, está no quarto quadrante. %f, %f", x, y);
    } else if ((x == 0) && y != 0) {
        printf("Sua Coordenada, está sobre o eixo das ordenadas. %f, %f", x, y);
    } else if ((x != 0) && y == 0) {
        printf("Sua Coordenada, está sobre o eixo das abcissas. %f, %f", x, y);
    }
    return 0;

    //Usei o Chat, pois não consegui fazer essa atividade. Entendi mais ou menos o que foi proposto aqui, mas sem sucesso na hora de fazer eu mesmo.
}