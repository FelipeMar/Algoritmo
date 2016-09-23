/* Faça um programa em Linguagem C que receba do usuário um arquivo, e mostre na tela quantas linhas esse arquivo possui.*/
#include <stdio.h>

int main()
{
    FILE * arq;
    int cont = 0;
    char nome[100], x;
    printf("Informe o nome do arquivo(.txt).\n");
    scanf("%s",nome);
    if ((arq = fopen(nome,"r")) == 0) {
        printf("ERRO!!!");
        return 1;
    }
    else {
        while (feof(arq) == 0) {
             fscanf(arq, "%c", &x);
             if (x == '\n') {
                cont++;
             }
        }
    }
    printf("O arquivo possui %d linhas.\n",cont);
    fclose(arq);
    return 0;
}
