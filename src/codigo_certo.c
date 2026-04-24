#include <stdio.h>

int main() {
    float nota1;
    float nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", nota2);

    float media = nota1 + nota2 / 2.0;

    if (media >= 6) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}