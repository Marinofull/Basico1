#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i, len;
    char word[51];
    // for (i = 0; i < 128; ++i)
    // {
    //     printf("%d=%c\n",i, i );
    //     /* code */
    // }

    scanf("%s", word);
    len= strlen(word);
    for (i = 0; i < len; ++i)
    {
        switch(word[i]){
            case 'a': break;
            case 'e': break;
            case 'i': break;
            case 'o': break;
            case 'u': break;
            default:
                printf("%c",word[i] );
        }
    }
    printf("\n");

    return 0;
}
