#include <stdio.h>

void main(){
    int dividendo, divisor, quociente, resto;
    scanf("%d%d", &dividendo, &divisor);
    quociente = dividendo / divisor;
    resto = dividendo % divisor;
    printf("%d %d\n", quociente, resto);
}