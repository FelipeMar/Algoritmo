#include <stdio.h>

int apaga_caracter(char * palavra,char a)
{
    int i,k=0;

    for (i = 0 ; palavra[i] != '\0' ; i++)
    {
        if (palavra[i] == a)
        {
            k++;
            palavra[i] = ' ';
        }
    }
    return k;
}

int main()
{
    char str[100],c;
    int x;

    scanf("%[^\n]s",str);

    fflush(stdin);

    scanf("%c",&c);

    x = apaga_caracter(str,c);

    printf("%d caracter(s) %c apagados.\n",x,(int)c - 32);

    return 0;
}
