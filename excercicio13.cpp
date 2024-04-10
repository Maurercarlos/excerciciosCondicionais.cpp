#include <iostream>

//Escreva um programa para cálculo de recuperação em C++. Para estar em recuperação, o aluno precisou tirar menos de 7 e mais que 5 na cadeira. A nota para 
//aprovação do aluno é a sua nota atual + o que falta para 10. Se o aluno tirou 5, deve tirar 5 na recuperação, se o aluno tirou 6, deve tirar 4 na recuperação. Escreva um 
//programa que recebe a nota do aluno na cadeira, a nota da recuperação e sua porcentagem de presença. Se o aluno tiver 75% ou mais de presença, ele pode ser 
//aprovado. Se a soma da nota do aluno na disciplina com a recuperação for 10 ou mais, e o aluno tiver porcentagem de presença para aprovação, deve retornar 
//"Aprovado". Se a soma da nota do aluno na disciplina com a recuperação for menor que 10, mesmo que tenha porcentagem de presença para aprovação, deve retornar "Reprovado".

int main(){

    float frequencia;
    int nota;
    int recuperacao;
    

    printf("Digite sua nota, da recuperação: ");
    scanf("%d", &recuperacao);

    printf("Digite a sua frequência: ");
    scanf("%f", &frequencia);

    printf("Digite sua nota: ");
    scanf("%d", &nota);

    if (frequencia > 75) {
        printf("Aprovado. %.2f\n", frequencia);
    } else if ((recuperacao + nota == 10) && frequencia >= 75) {
        printf("Aprovado. %d, %d, %.2f\n", recuperacao, nota, frequencia);
    } else if ((recuperacao + nota != 10) && frequencia < 75) {
        printf("Reprovado. %d, %d, %.2f\n", recuperacao, nota, frequencia);
    } else if ((recuperacao + nota == 10) && frequencia < 75) {
        printf("Reprovado. %d, %d, %.2f\n", recuperacao, nota, frequencia);
    }
    return 0;
}