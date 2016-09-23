/*  Faça um programa em C que recebe como entrada o nome de um arquivo de entrada e o nome de um arquivo de saída e o ano corrente. Cada linha do
    arquivo de entrada contém o nome de uma pessoa ocupando 40 caracteres e o seu ano de nascimento. A rotina devera ler o arquivo de entrada e gerar
    um arquivo de saída onde aparece o nome da pessoa seguida por uma string que representa a sua idade.
•	Se a idade for menor do que 18 anos, escrever menor de idade
•	Se a idade for maior do que 18 anos, escrever maior de idade
•	Se a idade for igual a 18 anos, escrever entrando na maior idade */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    FILE * entrada;
    FILE * saida;
    char ano[5], nome[40], nome_entrada[100], nome_saida[100],x = true;
    char menor[] = "menor de idade.\n", maior[] = "maior de idade.\n", outro[] = "entrando na maior idade.\n";
    int  i = 0, soma = 0;
    printf("Informe o nome do arquivo de entrada e saida(com a extensao .txt).\n");
    scanf("%s",nome_entrada);
    scanf("%s",nome_saida);
    if ((entrada = fopen(nome_entrada,"r")) == 0 || (saida = fopen(nome_saida,"w")) == 0) {
        printf("ERRO!!!");
        return 1;
    }
    else {
        while (feof(entrada) == 0) {
             if (x) {
               fgets(nome, 40, entrada); // pegando uma string de 40 caracteres.
               fputs(nome, saida);
             }
             if (x) {
             for (i = 0; i < 4; i++) {
                ano[i] = fgetc(entrada); // lendo do arquivo um caracter n e armagernando em uma string.
             }
             ano[i] = '\0';
             if (atoi(ano) > 1000) { // usando a funcao atoi para transformar a string ano em inteiro.
                soma = 2016 - (atoi(ano));
                if (soma > 18) {
                   fputs(maior, saida);
                }
                else {
                    if (soma == 18) {
                        fputs(outro, saida);
                    }
                    else {
                        fputs(menor,saida);
                    }
                }
                x = false;
             }
             }
             if ( getc(entrada) == '\n') { // teste logico para saber se a linha acabou.
                x = true;
             }
             else {
                getc(entrada);
             }
        }
    }
    fclose(entrada);
    fclose(saida);
    return 0;
}
