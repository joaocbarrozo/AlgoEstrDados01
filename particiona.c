#include <stdio.h>
#include <stdlib.h>

int* leVetor(int *vet, int tam);
void imprimeVetor(int *vet, int tam);
int* particiona(int *v, int tam, int p);

int main()
{
    int q, p, i, *v;
    scanf("%d %d", &q, &p);
    v = (int*)malloc(q*sizeof(int));
    v = leVetor(v, q);
    v = particiona(v, q, p);
    imprimeVetor(v, q);
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

void imprimeVetor(int *vet, int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {
        printf("%d\n", vet[i]);
    }
}

int* particiona(int *v, int tam, int p)
{
    int i, aux, j;
    aux = v[tam-1];
    v[tam-1] = v[p];
    v[p]= aux;
    p=tam-1;
    for(i=0, j=i-1; i<tam-1;i++)
    {
        if(v[i]<=v[p])
        {
            j++;
            aux = v[j];
            v[j]=v[i];
            v[i]=aux;
        }
    }

    aux = v[j+1];
    v[j+1] = v[p];
    v[p] = aux;
    return v;
}