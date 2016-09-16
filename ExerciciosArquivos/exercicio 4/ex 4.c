/* Escreva um programa que leia o nome de um arquivo de texto e uma palavra do usuário. O programa deve contar quantas vezes a palavra aparece no arquivo fornecido; */
#include <stdio.h>

int main()
{
    FILE *arq;
    int cont = 0,k = 0, tamanho = 0,i;
    char nome[100], palavra[100], x;
    printf("Informe o nome do arquivo e a palavra.\n");
    scanf("%s",nome);
    scanf("%s",palavra);
    if ((arq = fopen(nome,"r")) == 0) {
        printf("ERRO!!");
        return 1;
    }
    else {
        for (i = 0; palavra[i] != '\0'; i++) tamanho++;
        i = 0;
        while (feof(arq) == 0) {
            fscanf(arq, "%c", &x);
            if (x == palavra[i]) {
                k++;
                i++;
            }
            if (k == tamanho) {
                cont++;
                k = 0;
                i = 0;
            }
        }
    }
    fclose(arq);
    printf("A palavra %s aparece %d vezes.\n",palavra,cont);
    return 0;
}
