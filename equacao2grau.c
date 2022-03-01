#include <stdio.h>
#include <math.h>

void main(void){
    float a, b, c, x1, x2, delta;

    printf("Digite o valor de a:\n");
    scanf("%f", &a);
    
    while(a == 0){
        printf("\nDigite um valor válida para a:\n");
        scanf("%f", &a);
    }
    
    printf("\nDigite o valor de b:\n");
    scanf("%f", &b);
    
    printf("\nDigite o valor de c:\n");
    scanf("%f", &c);
    
    delta = pow(b, 2) - (4*a*c);
    x1 = (0 - b + sqrt(delta))/2*a;
    x2 = (0 - b - sqrt(delta))/2*a;
    
    if(delta < 0){
        x1 = 0;
        x2 = 0;
        printf("\n");
        printf("Esta equação poderá ser resolvida por números complexos");
    } else if(delta > 0){
        printf("\n");
        printf("As raízes desta equação são %2.1f e %2.1f.", x1, x2);
    } else if(delta == 0){
        printf("As raízes desta equação são %2.1f e %2.1f.", x1, x2);
        printf("Note que as raízes são idênticas em módulo e sinal.");
    }
}