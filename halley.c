#include <stdio.h>

#define LASTTIME 1986
#define EACH 76

int main()
{

    int y, n= LASTTIME;

    scanf("%d", &y);
    do{
        n+=EACH;
    }while(n<=y);

    printf("%d\n",n);

    return 0;
}
