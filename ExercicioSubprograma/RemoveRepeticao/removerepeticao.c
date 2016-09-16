#include <stdio.h>

void retira_repeticao(char * palavra)
{
    int i,j,k=0;

    for (i = 0 ; palavra[i] != '\0' ; i++)
    {
        if (palavra[i] == ' ') continue;
        for (j = i + 1; palavra[j] != '\0' ; j++)
        {
            if (palavra[i] == palavra[j])
            {
                palavra[j] = '_';
                k = 1;
            }
        }
        if (k == 1) palavra[i] = '_';
        k = 0;
    }
}

int main()
{
    char str[100];

    scanf("%[^\n]s",str);

    retira_repeticao(str);

    printf("%s\n",str);

    return 0;
}
