#include <stdio.h>

int compara(char * s1, char * s2)
{
    int i,j,k=0;

    for (i = 0 ; s1[i] != '\0' ; i++)
    {
        if (s1[i] == s2[0])
        {
            for (j = 1 ; s2[j] != '\0' ; j++)
            {
                if (s1[i + j] == s2[j]) k++;
            }
            if (k == j - 1) return i;
        }
    }
    return -1;
}

int main()
{
    char s1[100],s2[100];

    scanf("%[^\n]s",s1);

    fflush(stdin);

    scanf("%[^\n]s",s2);

    printf("%d",compara(s1,s2));

    return 0;
}
