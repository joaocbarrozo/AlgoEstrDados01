#include <stdio.h>
#include <stdlib.h>

int* leVetor(int *vet, int tam);
void imprimeVetor(int *vet, int tam);
int ordenaSelection(int *vet, int tam);

int main()
{
    int n, *v, trocas;
    scanf("%d", &n);
    v = (int*)malloc(n*sizeof(int));
    v = leVetor(v, n);
    trocas = ordenaSelection(v, n);
    printf("%d\n", trocas);
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

int ordenaSelection(int *vet, int tam)
{
    int i, iMin, j, aux, t=0;
    imprimeVetor(vet, tam);
    for(i=0; i<tam-1; i++)
    {
        iMin=i;
        for(j=i+1; j< tam; j++)
        {
            if (vet[j]<vet[iMin])
            {
                iMin=j;
                t++;
            }
        }
        aux = vet[i];
        vet[i] = vet[iMin];
        vet[iMin] = aux;
        imprimeVetor(vet, tam);
    }
    imprimeVetor(vet, tam);
    return t;
}
