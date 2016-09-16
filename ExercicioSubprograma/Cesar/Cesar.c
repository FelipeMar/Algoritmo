#include <stdio.h>

void codificar(char * codigo,int posicoes)
{
    int i,aux=0;

    for (i = 0 ; codigo[i] != '\0' ; i++)
    {
        if (codigo[i] == ' ') continue;
        aux = (int)codigo[i];
        codigo[i] = (int)codigo[i] + posicoes;

        if (aux >= 65 && aux <= 90)
        {
            if (codigo[i] > 90)
            {
                codigo[i] = 65 + ((int)codigo[i] - 91);
            }
        }else
         {
             if (aux >= 97 && aux <= 122)
             {
                 if (codigo[i] > 122)
                 {
                    codigo[i] = 97 + ((int)codigo[i] - 123);
                 }
             }
         }
    }
    printf("\nPalavra codificada: %s\n",codigo);
}

void decodificar(char * codigo,int posicoes)
{
    int i,aux=0;

    for (i = 0 ; codigo[i] != '\0' ; i++)
    {
        if (codigo[i] == ' ') continue;
        aux = (int)codigo[i];
        codigo[i] = (int) codigo[i] - posicoes;

        if (aux >= 65 && aux <= 90)
        {
            if (codigo[i] < 65)
            {
                codigo[i] = 90 - ((int)codigo[i] - 64);
            }
        }else
         {
             if (codigo[i] < 97)
             {
                 codigo[i] = 123 - ((int)codigo[i] - 96);
             }
         }
    }
    printf("\nPalavra decodificada: %s\n",codigo);
}

int main(){

    int desloc;
    char op;
    char str[100];

    do{

        printf("Informe a palavra a codificar ou decodificar: ");
        scanf("%[^\n]s",str);
        printf("Qual a quantidade de deslocamento (1-10): ");
        scanf("%d",&desloc);

        printf("Opcoes:\n\nC- Codificar\nD- Decodificar\nS- Sair\n\nOpcao:");

        fflush(stdin);
        op = getche();

        switch(op){
        case 'c':
        case 'C':
            codificar(str, desloc);
        break;
        case 'd':
        case 'D':
            decodificar(str, desloc);
        break;
        case 'S':
        case 's':
            printf("Bye...");
        break;
        default:
            printf("Opcao invalida\n\n");

        }


    }while(op != 'S' && op != 's');

    return 0;
}
