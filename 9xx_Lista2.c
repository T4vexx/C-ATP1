#include <stdio.h>
#include <time.h>

int main(void)
{
    struct tm * data_hora_atual;
    time_t segundos;
    time(&segundos);   
    data_hora_atual = localtime(&segundos); 

    printf("Tempo em minutos: %d", data_hora_atual->tm_min);

    return 0; 

}