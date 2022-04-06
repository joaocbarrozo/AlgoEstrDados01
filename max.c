#include <stdio.h>

void main()
{
    int n=0, max=-1;
    while(n>=0){
        scanf("%d", &n);
        if (n > max){
            max = n;
        }
    }
    if (max >= 0){
        printf("%d\n", max);
    }
    else{
        printf("nenhum numero informado\n");
    }
}