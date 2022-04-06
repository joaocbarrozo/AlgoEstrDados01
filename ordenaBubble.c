#include <stdio.h>
#include <stdlib.h>

int* leVetor(int *vet, int tam);
void imprimeVetor(int *vet, int tam);
int ordenaBubble(int *vet, int tam);

int main()
{
    int n, *v, trocas;
    scanf("%d", &n);
    v = (int*)malloc(n*sizeof(int));
    v = leVetor(v, n);
    trocas = ordenaBubble(v, n);
    printf("Trocas: %d\n", trocas);
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

void imprimeVetor(int *vet, int tam)
{
    int i;
    for (i=0; i<tam-1; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("%d\n", vet[i]);
}

int ordenaBubble(int *vet, int tam)
{
    int i, n=tam, aux, t=0;
    imprimeVetor(vet, tam);
    while(n>0)
    {
        for(i=0; i<n-1; i++)
        {
            if(vet[i]>vet[i+1])
            {
                aux = vet[i+1];
                vet[i+1] = vet[i];
                vet[i] = aux;
                t++;
                imprimeVetor(vet, tam);
            }
        }
        n--;
    }
    imprimeVetor(vet, tam);
    return t;
}
