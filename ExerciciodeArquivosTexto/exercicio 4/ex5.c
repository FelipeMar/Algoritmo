/* Faça uma rotina em C que recebe como entrada o nome de um arquivo de entrada e o nome de um arquivo de saída.
 O arquivo de entrada contém o nome de um aluno ocupando 40 caracteres e três inteiros que indicam suas notas
 A rotina deverá a ler o arquivo de entrada e gerar um arquivo de saída onde aparece o nome do aluno e as suas notas em ordem crescente. */
#include <stdio.h>
#include <stdbool.h>

int maior(int, int);
int menor(int, int);
int meio(int, int, int);

 int main()
 {
     FILE * entrada;
     FILE * saida;
     char aluno[40], nome_entrada[100], nome_saida[100], x = true;
     int n1, n2, n3,min, max, med;
     scanf("%s",nome_entrada);
     scanf("%s",nome_saida);
     if ((entrada = fopen(nome_entrada,"r")) == 0 || (saida = fopen(nome_saida,"w")) == 0) {
         printf("ERRO!!!");
         return 1;
     }
     while (feof(entrada) == 0) {
        if (x) {
            fgets(aluno, 40, entrada);
            fprintf(saida, "%s", aluno);
        }
        if (x) {
              x = false;
              fscanf(entrada, "%d %d %d",&n1,&n2,&n3);
              min = menor(n1,menor(n2,n3));
              med = meio(n1,n2,n3);
              max = maior(n1,maior(n2,n3));
              fprintf(saida, "%d %d %d\n", min, med, max);
            }
        if (fgetc(entrada) == '\n') {
            x = true;
        }
        else {
            fgetc(entrada);
        }
     }
     fclose(entrada);
     fclose(saida);
     return 0;
}

maior(a, b)
{
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

menor (a, b)
{
    if (a < b) {
        return a;
    }
    else {
        return b;
    }
}

meio (a, b, c)
{
    if (a > b) {
        if (b > c) {
            return b;
        }
        else {
            if (a > c) {
                return c;
            }
            else {
                return a;
            }
        }
    }
    else {
        if (b > c) {
            if (a > c) {
                return a;
            }
            else {
                return c;
            }
        }
        else {
            return b;
        }
    }

}
