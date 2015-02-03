#include <stdio.h>
#include <stdlib.h>

void xorSwap (int *x, int *y) {
     if (x != y) {
         *x ^= *y;
         *y ^= *x;
         *x ^= *y;
     }
}

void merge (int *array, int len){
    int i;
    for (i = 0; i < len; ++i)
    {
        /* code */
    }
}

void mergesort (int *v1,int *v2, int n){

}

int compare(const void *a, const void *b){
    int aa = *(int*)a;
    int bb = *(int*)b;
    if(aa > bb) return -1;
    if(aa > bb) return 1;
    return 0;
    // retorna < 0 se a precede b
    // retorna > 0 se b precede a
    // retorna 0 se forem iguais
}

int main(int argc, char const *argv[])
{
    int i, n, *v;

    scanf("%d", &n);
    v= (int*)malloc(sizeof(int)*n);

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &v[i]);
        // printf("%d ", v[i]);
    }

    mergesort(v, &v[n/2], n);

    return 0;
}
