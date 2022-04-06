#include <stdio.h>
#include <stdlib.h>

int leDiagonal(int *v, int tam, int i);
float somaVetor(int *v, int tam);
float mediaVetor(int *v, int tam);

int main()
{
    char operacao;
    int n, *diagonal, *v, i, j;
    float resultado;
    scanf("%c", &operacao);
    scanf("%d", &n);
    diagonal = (int*) malloc(n * sizeof(int));
    v = (int*) malloc(n * sizeof(int));
    for(i=0; i < n; i++)
    {
        diagonal[i] = leDiagonal(v, n, i);
    }

    switch(operacao){
        case 'S':
        resultado = somaVetor(diagonal, n);
        break;
        case 'M':
        resultado = mediaVetor(diagonal, n);
        break;
    }
    printf("%.1f\n", resultado);
    return 0;
}

int leDiagonal(int *v, int tam, int index)
{
    int i;
    for(i=0; i < tam; i++){
        scanf("%d", &v[i]);
    }
    return v[index];
}

float somaVetor(int *v, int tam)
{
    int i;
    float soma=0;
    for(i=0; i < tam; i++)
    {
        soma += v[i];
    }
    return soma;
}

float mediaVetor(int *v, int tam)
{
    float media;
    media = (somaVetor(v, tam)) / tam;
    return media;
}