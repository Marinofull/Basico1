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

void busca (int procurado, int lv, int *v){
    int esq=0, dir=lv-1, meio=lv/2, atual, find=0;

    while(esq<dir){
        meio=(esq+dir)/2;
        atual= v[meio];

        if(procurado >= atual){
            dir = meio;
        }else{
            esq = meio+1;
        }

        // if(procurado < atual){
        //     dir = meio-1;
        // }else if(procurado == atual){
        //     esq=meio;
        //     dir=meio;
        //     find=1;
        //     printf("passou AKIIII\n");
        // }else{
        //     esq = meio+1;
        // }

        // if(procurado<v[meio]){
        //     dir=meio;
        //     meio-=meio/2;
        // }else if(procurado==v[meio]){
        //     esq=meio;
        //     dir=meio;
        //     find=1;
        // }else {
        //     esq=meio;
        //     meio+=meio/2;
        // }
    }

    if(procurado == atual){
        printf("SIM\n");
        return;
    }
    printf("NAO\n");
    return;
}

int main(int argc, char const *argv[])
{
    int v[1001], u[1001], n, m, i, j, spent=0;

    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &v[i]);
    }

    scanf("%d", &m);

    for (i = 0; i < m; ++i)
    {
        scanf("%d", &u[i]);
    }

    qsort(v, n, sizeof(int), cmajor);
    // qsort(u, m, sizeof(int), cminus);


    for (i = 0; i < m; ++i)
    {
        busca(u[i], n, v);
        // printf("procurando o %d\n", u[i] );
    }

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
