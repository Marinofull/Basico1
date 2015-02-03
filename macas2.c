#include <stdio.h>

int main()
{
    int i, j, n, k, iteracao, soma=0, maior=0;

    scanf("%d%d", &n, &k);
    iteracao= (n - k + 1);
    int v[n], u[iteracao];

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &v[i]);

        if (i < k)
        {
            soma+=v[i];
        }else{
            soma = soma - v[i-k] + v[i];
        }
        // printf("soma vale%d\n", soma);
        if(maior < soma){
            maior=soma;
        }
    }

    // for (i = 0; i < iteracao; ++i)
    // {
    //     soma=0;
    //     for (j = 0; j < k; ++j)
    //     {
    //         soma+=v[j+i];
    //     }

    //     u[i]=soma;

    //     if(maior < u[i]){
    //         maior=u[i];
    //     }
    // }

    // for (i = 0; i < n; ++i)
    // {
    //     printf("%d\n",v[i] );
    // }

    printf("%d\n", maior);

    return 0;
}
