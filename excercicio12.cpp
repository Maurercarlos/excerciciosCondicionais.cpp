#include <iostream>

//Crie um algoritmo em C++ que recebe 3 notas de um aluno, junto com a sua porcentagem de presença na cadeira, e deve fazer a média das notas do aluno. Se 
//for acima de 7 o aluno está aprovado, se for abaixo de 7 mas acima de 5 o aluno está em recuperação, se for abaixo de 5 o aluno reprovou. E se o aluno tiver 100% 
//de presença e nota para aprovação deve imprimir "Aprovado" e um parabéns. Se o aluno tiver 75% de presença e nota para aprovação deve imprimir "Aprovado". Se o
//aluno tiver menos de 75% de presença, mesmo que tenha nota para aprovação, deve retornar "Reprovado". 

int main(){

    float frequencia;
    int nota;
    int media;


    printf("Digite sua primeira nota: ");
    scanf("%d", &nota);

    printf("Digite sua segunda nota: ");
    scanf("%d", &nota);

    printf("Digite sua terceira nota: ");
    scanf("%d", &nota);

    printf("Digite a sua frequência: ");
    scanf("%f", &frequencia);

    media = (nota + nota + nota) / 3;

    if (nota > 7) {
        printf("Aprovado %d\n", nota);
    } else if ((nota < 7) && nota > 5) {
        printf("Recuperação %d\n", nota);
    } else if (nota < 5) {
        printf("Reprovado %d\n", nota);
    } else if ((frequencia = 100) && media >= 7) {
        printf("Aprovado. Parabéns. %.3f, %d", frequencia, media);
    } else if ((frequencia = 75) && media >= 7) {
        printf("Aprovado. %.3f, %d", frequencia, media);
    } else if ((frequencia < 75) && media >= 7) {
        printf("Reprovado, por falta de frequencia. %.3f, %d", frequencia, media);
    }
    return 0;
}