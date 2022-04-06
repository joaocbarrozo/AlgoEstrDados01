#include <stdio.h>
#include <stdlib.h>

int* leVetor(int *vet, int tam);
int checaOrdemCrescente(int *vet, int tam);
void imprimeVetor(int *vet, int tam);

int main()
{
    int n, *v, i=0, r;
    //r = (int*) malloc(sizeof(int));
    while(scanf("%d", &n) != EOF)
    {
        //r = (int*) realloc(r, (2+i)*sizeof(int));
        if (n == 0)
        {
            printf("S\n");
        }
        else
        {
            v = (int*) malloc(n*sizeof(int));
            v = leVetor(v, n);
            r=checaOrdemCrescente(v, n);
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
        i++;
    }
    //imprimeVetor(r, i);
    //free(r);
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


int checaOrdemCrescente(int *vet, int tam)
{
    int i;
    int r;
    if (tam == 1)
    {
        return 1;
    }
    for(i=0; i<tam-1 && vet[i]<=vet[i+1]; i++)
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

void imprimeVetor(int *vet, int tam)
{
    int i;
    for(i=0; i < tam; i++)
    {
        if(vet[i]==1)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }
}