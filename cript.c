#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i, j, k, n, tam;
    char s[1002], t[1002];

    scanf("%d\n",&n);
    for (k = 0; k < n; ++k)
    {
        gets(s);

        tam=strlen(s);
        // printf("tamanho eh %d\n", tam);

        for (i = 0; i < tam; ++i)
        {
            if ( (s[i]>64 && s[i]<91) || (s[i]>96 && s[i]<123) )
            {
                s[i]+=3;
            }
        }
        // printf("shiftado 3 => %s\n",s );

        for (i = tam-1, j=0; i >= 0; i--, j++)
        {
            t[j]=s[i];
        }
        t[tam]='\0';

        // printf("invertido => %s\n",t );

        for (i = tam/2; i < tam; ++i)
        {
            t[i]--;
        }
        printf("%s\n", t);
    }
    return 0;
}

//A - Z >> 65 - 90
//a - z >> 97 - 122
