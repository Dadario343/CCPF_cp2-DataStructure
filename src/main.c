#include <stdio.h>

void menu(){

    printf("\n===== Bem vindo ao sistema de notas =====\n");
    printf("1. Digitar notas\n");
    printf("2. Digitar frequencia do aluno\n");
    printf("3. Sair do sistema\n");
    printf("Opcao: ");

}

int main() {

    menu();
    int opcao;

    if (opcao != 1 && opcao != 2 && opcao != 3){
        
        printf("Opção Invalida\n");
        printf("Digite Novamente\n");
    
    }
    
    switch (opcao) {

        case 1:
            float nota1;
            float nota2;

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", nota2);

    }

    return 0;
}