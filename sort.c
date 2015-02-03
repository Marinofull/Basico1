#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int aa = *(int*)a;
    int bb = *(int*)b;
    if(aa > bb) return 1;
    if(aa < bb) return -1;
    return 0;
    // retorna < 0 se a precede b
    // retorna > 0 se b precede a
    // retorna 0 se forem iguais
}


int main(int argc, char const *argv[])
{
    int v[1001], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &v[i]);
    }

    qsort(v, n, sizeof(int), compare);

    for (i = 0; i < n; ++i)
    {
        if(i^0) printf(" ");
        printf("%d", v[i]);
    }
    printf("\n");
    return 0;
}
