#include <stdio.h>
#include <stdlib.h>

struct equipes{
    char nome[51];
    int qtdJogador;
    struct jogador *equipe;
};

struct jogador{
    char nome[51];
    int gols;
};

int calcMediaGols (struct jogador *atleta, int numAtletas);

int main()
{
    int i, j, qtdTimes, mediaGols, qtdJogadores;
    struct equipes *times;
    scanf("%d", &qtdTimes);
    times = (struct equipes*) malloc(qtdTimes*sizeof(struct equipes));
    for(i=0; i< qtdTimes; i++)
    {
        scanf("%s", times[i].nome);
        scanf("%d", &times[i].qtdJogador);
        times[i].equipe = (struct jogador*) malloc(times[i].qtdJogador*sizeof(struct jogador));
        for(j=0; j < times[i].qtdJogador; j++)
        {
            scanf("%s %d", times[i].equipe[j].nome, &times[i].equipe[j].gols);
        }
    }
    for(i=0;i< qtdTimes; i++)
    {
        mediaGols = calcMediaGols(times[i].equipe, times[i].qtdJogador);
        for(j=0; j<times[i].qtdJogador; j++)
        {
            if(times[i].equipe[j].gols>mediaGols)
            {
                printf("[%s] %s\n", times[i].nome, times[i].equipe[j].nome);
            }
        }
    }
    free(times);
    return 0;
}

int calcMediaGols (struct jogador *atleta, int numAtletas)
{
    int i, soma=0;
    for(i=0; i<numAtletas; i++)
    {
        soma += atleta[i].gols;
    }
    return soma/numAtletas;
}