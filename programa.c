#include <stdio.h>
int main()
{
    int tabuada;
    printf("Digite o numero que deseja ver a tabuada: ");
    scanf("%i", &tabuada);

    for(int x = 0; x<10; x++){
        printf(" %d X %d = %d\n", tabuada, x+1, tabuada*(x+1));
    }

    return 0;
}
