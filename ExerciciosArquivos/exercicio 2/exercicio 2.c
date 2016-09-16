/*Escreva um programa que leia do usuário o nome de dois arquivos de texto. Crie um terceiro arquivo de texto com o conteúdo dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo);*/

#include <stdio.h>

int main()
{
    FILE * arq1;
    FILE * arq2;
    FILE * arq3;
    char nome1[100], nome2[100], x;
    scanf("%s",nome1);
    scanf("%s",nome2);
    if ((arq1 = fopen(nome1,"r")) == 0) {
        printf("ERRO na Leitura do arquivo 1!!!");
        return 1;
    }
    if ((arq2 = fopen(nome2,"r")) == 0) {
        printf("ERRO na Leitura do arquivo 2!!!");
        return 1;
    }
    else {
        arq3 = fopen("Novo.txt","w");
        while (feof(arq1) == 0) {
            fscanf(arq1, "%c", &x);
            fprintf(arq3, "%c", x);
        }
        fclose(arq1);
        while (feof(arq2) == 0) {
            fscanf(arq2, "%c", &x);
            fprintf(arq3, "%c", x);
        }
        fclose(arq3);
        fclose(arq2);
    }
    return 0;
}
