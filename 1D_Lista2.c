#include <stdio.h>
#include <locale.h>

int main() 
{
    printf("O homem deve realizar mais de uma travessia");

    printf("\n\nPrimeiramente ele deve atravessar o bode, pois se deixar o bode sozinho com a alfafa ele come tudo e se deixar com o lobo, o lobo come o bode",  setlocale(LC_ALL, ""));

    printf("\n\nDepois e so voltar e levar a alfafa, e ao chegar la, descarregar a alfafa e trazer o bode de volta, pois, se nao, o bode come a alfafa");

    printf("\n\nApos voltar ao comeco, ele deve levar o lobo e deixar o bode de novo");

    printf("\n\nAssim o motorista volta mais uma vez e atavessa o bode por ultimo");

    return 0;
}