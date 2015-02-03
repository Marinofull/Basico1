#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int aa = *(int*)a;
    int bb = *(int*)b;
    if(aa > bb) return -1;
    if(aa < bb) return 1;
    return 0;
    // retorna < 0 se a precede b
    // retorna > 0 se b precede a
    // retorna 0 se forem iguais
}


int main(int argc, char const *argv[])
{
    int n, i;

    scanf("%d%d", &n, &i);

    printf("%d", n^i);

    printf("\n");
    return 0;
}
