//inclusão das bibliotecas padrões de input, output, manipulação de string e operadores de memória
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Criação do struct de território
struct Territorio{
    char nome[30];
    char cor[10];
    int tropas;
};

//Código Principal
int main() {
    printf("===============INICIANDO WAR===============\n");
    //Definição da variável (mapa) do tipo (Territorio)
    struct Territorio mapa[5];
    
    printf("\n===============CADASTRE OS TERRITÓRIOS===============\n");
    
    //Loop para Cadastro de Territórios
    for(int i = 0; i < 5; i++){
    printf("\n========CADASTRANDO TERRITÓRIO %d======= \n", i+1);
    printf("\n Digite o Nome do Território %d: ", i+1);
    scanf("%s",mapa[i].nome);
    printf("Digite a Cor do Território %d: ", i+1);
    scanf("%s",mapa[i].cor);
    printf("Digite o Número de tropas do Território %d: ", i+1);
    scanf("%d", &mapa[i].tropas);
    };
    
    printf("\n=========EXIBINDO MAPA MUNDI ATUAL============\n");
    
    //Loop para exibição dos Territórios Cadastrados
    for(int i = 0; i < 5; i++){
    printf("\n========TERRITÓRIO %d======= \n", i+1);
    printf("\n Nome: %s", mapa[i].nome);
    printf("\n Cor: %s", mapa[i].cor);
    printf("\n Tropas: %d", mapa[i].tropas);
    };
    
    return 0;
}