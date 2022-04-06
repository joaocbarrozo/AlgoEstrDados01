#include <stdio.h>
#include <stdlib.h>

int* leVetor(int *vet, int tam);
void buscaVetor(int *vet, int vetTam, int *vetBusca, int vetBuscaTam);

int main()
{
    int i, n, m, *vn, *vm;
    scanf("%d", &n);
    vn = (int*) malloc(n*sizeof(int));
    vn = leVetor(vn, n);
    scanf("%d", &m);
    vm = (int*) malloc(m*sizeof(int));
    vm = leVetor(vm, m);
    buscaVetor(vn, n, vm, m);

    return 0;
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

void buscaVetor(int *vet, int vetTam, int *vetBusca, int vetBuscaTam)
{
    int i, j;
    for (i=0; i<vetBuscaTam; i++)
    //aux=0;
    {
        for(j=0; j<vetTam; j++)
        {
            if(vetBusca[i]==vet[j])
            {
                printf("ACHEI\n");
                break;
            }
            else if (j == vetTam-1)
            {
                printf("NAO ACHEI\n");
            }
        }
    }
}