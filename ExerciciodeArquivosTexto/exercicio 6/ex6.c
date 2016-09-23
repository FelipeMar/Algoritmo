/*  Faça um programa em C que recebe como entrada o nome de arquivo de entrada e o nome de um arquivo de saída.
    O arquivo de entrada contém em cada linha o nome de uma cidade ocupando 40 caracteres e o seu número de habitantes.
    A rotina dever ´ a ler o arquivo de entrada e gerar um arquivo de saída onde aparece o nome da cidade mais populosa seguida pelo seu número de habitantes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    FILE * entrada;
    FILE * saida;
    char nome_entrada[100], nome_saida[100], numeros_abitantes[9], cidade[41], aux[41], x, a = true;
    int numero, i, aux2 = 0;
    scanf("%s",nome_entrada);
    scanf("%s",nome_saida);
    if ((entrada = fopen(nome_entrada,"r")) == 0 || (saida = fopen(nome_saida,"w")) == 0) {
        printf("ERRO!!!");
        return 1;
    }
    while (feof(entrada) == 0) {
        if (a) {
          fgets(cidade, 40, entrada);
          a = false;
        }
        else {
          for (i = 0; i < 8; i++) {
            fscanf(entrada, "%c", &x);
            if (x >= 48 && x <= 57 ) {
            numeros_abitantes[i] = x;
            }
          }
          numeros_abitantes[i] = '\0';
        }
        if (atoi(numeros_abitantes) > aux2) {
            aux2 = atoi(numeros_abitantes);
            for (i = 0; cidade[i] != '\0'; i++) {
                aux[i] = cidade[i];
            }
            aux[i] = '\0';
        }
        if (fgetc(entrada) == '\n') {
           a = true;
        }
    }
    fputs(aux, saida);
    fprintf(saida, "%d", aux2);
    return 0;
}
