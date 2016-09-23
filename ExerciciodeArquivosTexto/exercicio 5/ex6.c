/* Faça um programa que receba dois arquivos do usuário, e crie um terceiro arquivo com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo). */
#include <stdio.h>

int main()
{
    FILE * arq1;
    FILE * arq2;
    FILE * novo;
    char arq_1[100], arq_2[100], x;
    scanf("%s",arq_1);
    scanf("%s",arq_2);
    if ((arq1 = fopen(arq_1,"r")) == 0 || (arq2 = fopen(arq_2,"r")) == 0) {
        printf("ERRO!!!");
        return 1;
    }
    novo = fopen("Novo.txt","a");
    while (feof(arq2) == 0) {
        while (feof(arq1) == 0) {
            x = fgetc(arq1);
            if ((int)x != -1) {
               fprintf(novo, "%c", x);
            }
        }
        x = fgetc(arq2);
        if ((int)x != -1) {
           fprintf(novo, "%c", x);
        }
    }
    return 0;
}
