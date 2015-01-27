#include <stdio.h>

//#define LENGTH 100

int main()
{

    int n;

    scanf("%d", &n);

    int i, v[n];
    for (i = 0; i < n;)
    {
        scanf("%d", &v[i++]);
    }

    for (i = 0; i < n;)
    {
        printf("%d",v[i]);
        i+=2;
        if (i<n)
        {
        printf(" ");
            /* code */
        }
    }
    printf("\n");
    for (i = 1; i < n;)
    {
        printf("%d",v[i]);
        i+=2;
        if (i<n)
        {
        printf(" ");
            /* code */
        }
    }
    printf("\n");

    return 0;
}
