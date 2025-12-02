// PROJETO AGENDA EM C
// ESTUDANTES: HENRIQUE S., YAGO,YURI, GABRIEL FLÔR, EMANOEl.

// BIBLIOTECAS UTILIZADAS
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int idade;
} Contato;

// FUNÇÃO PRINCIPAL
int main(void)
{

    Contato c[3] = {
        {"Ana", 19},
        {"Bruno", 23},
        {"Clara", 25},
    };

    // Adicionar Dados
    //  for (int i = 0; i < 3; i++)
    //  {
    //      printf("Nome: ");
    //      scanf("%s", c[i].nome);

    //     printf("Idade: ");
    //     scanf("%i", &c[i].idade);
    // }

    // Printar Dados
    //  printf("--Dados--\n");

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Nome: %s\n", c[i].nome);
    //     printf("Idade: %i\n", c[i].idade);

    // }

    return 0;
}
