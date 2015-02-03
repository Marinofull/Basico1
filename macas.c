#include <stdio.h>

int main()
{
    int i, j, n, k, q, l, soma;

    scanf("%d%d", &n, &k);
    int v[n];

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &v[i]);
    }
    scanf("%d", &q);

    for (i = 0; i < q; ++i)
    {
        /* [1, n − k + 1] */
        scanf("%d", &l);
        soma=0;
        for (j = 0; j < k; ++j)
        {
            /* code */
            soma+=v[j+l-1];
        }
        //printf("estou comecando da posicao %d >> %d\n", l, v[l-1]);
        printf("%d\n", soma);
    }

    // for (i = 0; i < n; ++i)
    // {
    //     printf("%d ", v[i]);
    // }
    // printf("\n");

    return 0;
}
