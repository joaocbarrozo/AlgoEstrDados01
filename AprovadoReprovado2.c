#include <stdio.h>

void main()
{
    float nota1, nota2, media;
    scanf("%f%f", &nota1, &nota2);
    media = (nota1+nota2)/2;
    if(media>= 60){
        printf("APROVADO\n");
    }
    else if(media<40){
        printf("REPROVADO\n");
    }
    else{
        printf("EXAME FINAL\n");
    }
}