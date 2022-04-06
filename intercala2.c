#include <stdio.h>
#include <stdlib.h>

int* leVetor(int *vet, int tam);
void imprimeVetor(int *vet, int tam);
int* intercala(int *v1, int *v2, int n1, int n2);

int main()
{
    int n1, n2, *v1, *v2, tam;
    scanf("%d %d", &n1, &n2);
    tam = n1+n2;
    v1 = (int*)malloc(tam*sizeof(int));
    v1 = leVetor(v1, tam);
    v2 = (int*)malloc(tam*sizeof(int));
    v2 = intercala(v1, v2, n1, n2);
    imprimeVetor(v2, tam);
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

int* intercala(int *v1, int *v2, int n1, int n2)
{
    int i, j, k, tam;
    i=0;
    j=n1;
    tam=n1+n2;
    for(k=0; k<tam;)
    {
        if(i<n1 && j<tam)
        {
            if(v1[j]<v1[i])
            {
                v2[k]=v1[j];
                k++;
                j++;
            }
            else
            {
                v2[k]=v1[i];
                k++;
                i++;
            }
        }
        else if (i>=n1)
        {
            v2[k]=v1[j];
            k++;
            j++;
        }
        else if (j>=tam)
        {
            v2[k]=v1[i];
            k++;
            i++;
        }
    }
    return v2;
}