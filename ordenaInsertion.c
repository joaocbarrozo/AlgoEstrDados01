#include <stdio.h>
#include <stdlib.h>

int* leVetor(int *vet, int tam);
void imprimeVetor(int *vet, int tam);
int ordenaInsertion(int *vet, int tam);

int main()
{
    int n, *v, trocas;
    scanf("%d", &n);
    v = (int*)malloc(n*sizeof(int));
    v = leVetor(v, n);
    trocas = ordenaInsertion(v, n);
    printf("Trocas:%d\n", trocas);
    if(trocas == 0)
    {
        printf("MELHOR CASO\n");
    }
    else if (trocas == 45)
    {
        printf("PIOR CASO\n");
    }
    else
    {
        printf("CASO ALEATORIO\n");
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

void imprimeVetor(int *vet, int tam)
{
    int i;
    for (i=0; i<tam-1; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("%d\n", vet[i]);
}

int ordenaInsertion(int *vet, int tam)
{
    int i, j, aux, t=0;
    imprimeVetor(vet, tam);
    for(i=1; i<tam; i++)
    {
        aux = vet[i];
        j = i-1;
        while(j>=0 && vet[j] >= aux)
        {
            vet[j+1] = vet[j];
            vet[j] = aux;
            imprimeVetor(vet, tam);
            j--;
            t++;
        }
    }
    imprimeVetor(vet, tam);
    return t;
}
