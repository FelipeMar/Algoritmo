/*Escreva um programa para converter o conteúdo de um arquivo de texto em caracteres maiúsculos. O programa deve receber do usuário o nome do arquivo a ser convertido e o nome do arquivo a ser salvo.*/
#include <stdio.h>

int main()
{
    FILE * arq1;
    FILE * arq2;
    char x, nome[100], nome1[100];
    printf("Informe a arquivo a ser lido e o arquivo a ser salvo a mudanca.\n");
    scanf("%s",nome);
    scanf("%s",nome1);
    if ((arq1 = fopen(nome,"r")) == 0) {
        printf("ERRO ao ler o arquivo!!!");
        return 1;
    }
    else {
        arq2 = fopen(nome1,"w");
        while (feof(arq1) == 0) {
            x = 0;
            fscanf(arq1, "%c", &x);
            if (x == 0){
                break;
            }
            if ((int)x >= 97) {
                x -= 32;
                fprintf(arq2, "%c", x);
            }
            else {
                fprintf(arq2, "%c", x);
            }
        }
        fclose(arq2);
    }
    fclose(arq1);
    return 0;
}
