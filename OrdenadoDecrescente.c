#include <stdio.h>
#include <stdlib.h>

int* leVetor(int *vet, int tam);
int checaOrdemDecrescente(int *vet, int tam);

int main()
{
    int n, *v, r;
    while(scanf("%d", &n) != EOF)
    {
        if (n == 0)
        {
            printf("S\n");
        }
        else
        {
            v = (int*) malloc(n*sizeof(int));
            v = leVetor(v, n);
            r=checaOrdemDecrescente(v, n);
            if(r==1)
            {
                printf("S\n");
            }
            else
            {
                printf("N\n");
            }
            free(v);
        }
    }
}

int* leVetor(int *vet, int tam)
{
    int i;
    for(i=0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
    return vet;
}


int checaOrdemDecrescente(int *vet, int tam)
{
    int i, r;
    if (tam == 1)
    {
        return 1;
    }
    for(i=0; i<tam-1 && vet[i]>=vet[i+1]; i++)
    {
    }
    
    if(i==tam-1)
    {
        r = 1;
    }
    else
    {
        r = 0;
    }
    return r;
}