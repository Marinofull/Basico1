#include <stdio.h>

int main()
{
    float a,b,c,d;
    int i, cond;

    do{

        scanf("%f %f %f %f", &a, &b, &c, &d);
        a=(a+b+c+d)/4;
        if(a >= 7.0){
            printf("Aluno aprovado\n");
        }else{
            printf("Aluno reprovado\n");
        }
        scanf("%d", &cond);
    }while(cond);


    return 0;
}
