#include <stdio.h>

int main()
{
    int n, m, p, q, i, j, k;

    scanf("%d%d", &n, &m);
    int a[n][m];

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // for (i = 0; i < n; ++i)
    // {
    //     for (j = 0; j < m; ++j)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }

    scanf("%d%d", &p, &q);
    int b[p][q];

    for (i = 0; i < p; ++i)
    {
        for (j = 0; j < q; ++j)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // for (i = 0; i < p; ++i)
    // {
    //     for (j = 0; j < q; ++j)
    //     {
    //         printf("%d ",b[i][j]);
    //     }
    //     printf("\n");
    // }

    int c[n][q];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < q; j++)
        {
            c[i][j]=0;
            for (k = 0; k < m; k++)
            {
                c[i][j]+=((a[i][k]) * (b[k][j]));
                // printf("c[%d][%d]+=((a[%d][%d]) * (b[%d][%d]));\n", i, j, i, k, k, j );
            }
            if(j!=0) printf(" ");
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
