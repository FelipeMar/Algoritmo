/* 1.	Faça um programa que lê um número N e sorteia N números inteiros (entre 0 e 100),
gravando todos em um arquivo texto. A primeira linha do arquivo deverá conter a quantidade de números. */
#include <stdio.h>
#include <time.h>

int main()
{
    int n;
    printf("Informe o numero do sorteio: ");
    scanf("%d",&n);
    FILE * arq;
    int x;
    if ((arq = fopen("Sorteio.txt","w")) == 0) {
        printf("ERRO!!!");
        return 1;
    }
    else {
        srand( (unsigned)time(NULL) );
        while (n > 0) {
            x = rand() % 101;
            fprintf(arq, "%d ", x);
            n--;
        }
    }
    return 0;
}
