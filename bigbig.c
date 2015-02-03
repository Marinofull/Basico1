#include <stdio.h>
#include <stdlib.h>

int cminus(const void *a, const void *b){
    int aa = *(int*)a;
    int bb = *(int*)b;
    if(aa > bb) return 1;
    if(aa < bb) return -1;
    return 0;
    // retorna < 0 se a precede b
    // retorna > 0 se b precede a
    // retorna 0 se forem iguais
}

int cmajor(const void *a, const void *b){
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
    int v[1001], u[1001], n, m, i, j, spent=0;

    scanf("%d%d", &n, &m);

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &v[i]);
    }

    for (i = 0; i < m; ++i)
    {
        scanf("%d", &u[i]);
    }

    qsort(v, n, sizeof(int), cmajor);
    qsort(u, m, sizeof(int), cminus);

    for (i = 0; i < n; i++)
    {
        // printf("%d+= %d*%d ", spent, v[i], u[i]);
        spent+=v[i]*u[i];
    }
    // printf("\n");
    printf("%d\n", spent);

    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ",v[i]);
    // }
    // printf("\n");
    // for (i = 0; i < m; i++)
    // {
    //     printf("%d ",u[i]);
    // }
    // printf("\n");
    return 0;
}
