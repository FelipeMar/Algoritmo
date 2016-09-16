#include <stdio.h>
#include <time.h>

void sorteio(char * palavra,int * qtd_sorteio)
{
    int i,j,x;

    while (*qtd_sorteio > 0)
    {
         i = 0;
         for (j = 0 ; palavra[j] != '\0' ; j++)
         {
             i++;
         }

         x = rand() % i;

         if (palavra[i] == ' ') continue;
         if(palavra[x] >= 65 && palavra[x] <= 90)
         {
            palavra[x] = (int)palavra[x] + 32;
         }else
          {
             if (palavra[x] >= 97 && palavra[x] <= 122) palavra[x] = (int)palavra[x] - 32;
          }
          (*qtd_sorteio)--;
    }
}

int main()
{
    char str[100];
    int qtd_sorteio;

    scanf("%[^\n]s",str);
    scanf("%d",&qtd_sorteio);

    sorteio(str,&qtd_sorteio);

    printf("%s\n",str);

    return 0;
}
