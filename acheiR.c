#include <stdio.h>
#include <stdlib.h>

int* leVetor(int *vet, int tam);
void buscaVetor(int *vet, int tam, int itemBusca);

int main()
{
    int i, n, m, *vn, *vm;
    scanf("%d", &n);
    vn = (int*) malloc(n*sizeof(int));
    vn = leVetor(vn, n);
    scanf("%d", &m);
    vm = (int*) malloc(m*sizeof(int));
    vm = leVetor(vm, m);
    for(i=0; i<m;i++)
    {
        buscaVetor(vn, n, vm[i]);
    }
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

void buscaVetor(int *vet, int tam, int itemBusca)
{
    if(tam == 0)
    {
        printf("NAO ACHEI\n");
    }
    else if(itemBusca == vet[tam-1])
    {
        printf("ACHEI\n");
    }
    else
    {
        buscaVetor(vet, tam-1, itemBusca);
    }
}