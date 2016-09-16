/* Escreva um programa que leia do usuário o nome de um arquivo de texto. Em seguida, mostre na tela quantas linhas o arquivo possui; */
#include <stdio.h>

int main()
{
    FILE * arq;
    short int i, cont = 0;
    char x;
    if ((arq = fopen("file.txt", "r"))== NULL) {
        printf("ERRO!!!\n");
        return 1;
    }
    else {
        while (feof(arq) == 0) {
            fscanf(arq, "%c" , &x);
            if (x == '\n') {
                cont++;
            }
        }
    }
    printf("%d\n",cont);
    fclose(arq);
    return 0;
}
