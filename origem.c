#include <stdio.h>

int main()
{
    float a;
    int b;

    scanf("%f %d", &a, &b);

    switch(b){
        case 1: printf("%2.2f Sul!\n", a);
        break;
        case 2: printf("%2.2f Norte!\n", a);
        break;
        case 3: printf("%2.2f Nordeste!\n", a);
        break;
        case 4: printf("%2.2f Centro-Oeste!\n", a);
        break;
        case 5: printf("%2.2f Sudeste!\n", a);
        break;
        default: printf("%2.2f Produto importado!\n", a);
        break;
    }


    return 0;
}
