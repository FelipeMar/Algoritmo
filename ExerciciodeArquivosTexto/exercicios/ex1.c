/* 1.	Fa�a um programa que l� um n�mero N e sorteia N n�meros inteiros (entre 0 e 100),
gravando todos em um arquivo texto. A primeira linha do arquivo dever� conter a quantidade de n�meros. */
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
