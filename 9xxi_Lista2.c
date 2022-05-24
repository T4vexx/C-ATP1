#include <stdio.h>
#include <time.h>

int main(void)
{
    float Tempo;

    printf("Digite o tempo em segundos: ");
    scanf("%f", &Tempo);

    Tempo = (Tempo/60)/60;

    printf("Tempo em horas: %f", Tempo);

    return 0; 
}