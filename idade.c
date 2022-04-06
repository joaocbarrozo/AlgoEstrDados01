#include <stdio.h>

void main()
{
    int i=0, anoNascimento=0, anoAtual=0;
    char nome[30];
    scanf("%d%s%d", &anoAtual, nome, &anoNascimento);
    for (i=0; nome[i]!= '\0'; i++){
        printf("%c", nome[i]);
    }
    printf(", voce completa %d anos de idade neste ano.\n", anoAtual-anoNascimento);
}