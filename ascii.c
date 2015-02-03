#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for (i = 0; i < 128; ++i)
    {
        printf("%d=%c\n",i, i );
        /* code */
    }
    return 0;
}

//A - Z >> 65 - 90
//a - z >> 97 - 122
