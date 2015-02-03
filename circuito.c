#include <stdio.h>

int main()
{
    int n, m, i, j;

    scanf("%d%d", &n, &m);

    int a[n][m], b[n][m];



    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            scanf("%d", &b[i][j]);
            a[i][j]= a[i][j] || b[i][j];
            if(j!=0){
                printf(" ");
            }
            printf("%d",a[i][j] );
        }
        printf("\n");
    }

    // int v[10];

    // v[11] = 'A';
    // printf("%d\n",v[11]);
    return 0;
}
