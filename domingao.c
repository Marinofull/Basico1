#include <stdio.h>

//#define LENGTH 100

int main()
{

    int i, j, t, p, d;

    scanf("%d%d", &p, &d);

    int v[p];

    for (i = 0; i < p; i++)
    {
        scanf("%d", &v[i]);
    }

    for (i = 0; i < p; i++)
    {
        for (j= i+1; j < p; j++)
        {
            if(v[i] > v[j]){
                t=v[j];
                v[j]=v[i];
                v[i]=t;
            }
        }
    }

    for (i = 0; i < d; ++i)
    {
        printf("%d\n", v[i]);
    }

    return 0;
}
