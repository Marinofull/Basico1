#include <stdio.h>

//#define LENGTH 100

int main()
{

    int n;

    scanf("%d", &n);

    int i,j, v[n], s=0, p=0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    for (i = 0; i < n; i++)
    {
        j = (i+1);
        for (; j < n; j++)
        {
            if((v[i] == v[j]) && (v[j]!=0)){
                s++;
                p=1;
                v[j]=0;
            }
         //   printf("%d>>%d ", j, v[j]);
        }
        //printf("\n");
        s+=p;
        p=0;
    }

    printf("%d\n", s);
    return 0;
}
