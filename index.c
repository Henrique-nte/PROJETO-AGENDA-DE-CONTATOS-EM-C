// PROJETO AGENDA EM C
// ESTUDANTES: HENRIQUE S., YAGO,YURI, GABRIEL FLÔR, EMANOEl.

// BIBLIOTECAS UTILIZADAS
#include <stdio.h>
#include <stdlib.h>
#include "contato.h" //Incluo o struct Contato que criei em outro arquivo

// FUNCÃO ADICIONAR CONTATO
//  add_contato(char nome, int idade){
//      printf("Hello World!!\n");
//  };

// Função que mostra o menu e retorna a opção escolhida pelo usuário
int show_Menu()
{
    int opc;
    printf("----MENU----\n");
    printf("----ACOES----\n");
    printf("1 - CONSULTAR CONTATO\n");
    printf("2 - INCLUIR CONTATO\n");
    printf("3 - EXCLUIR CONTATO\n");
    printf("4 - SAIR\n");
    scanf("%i", &opc);
    return opc;
}

void show_Contats(Contato c)
{
    printf("Mostrar Contatos!\n");
}

// FUNÇÃO PRINCIPAL
int main(void)
{
    Contato c[3] = {
        {"Ana", 19},
        {"Bruno", 23},
        {"Clara", 25},
    };
    int opc;
    // O programa deve apresentar um menu com, no mínimo, as seguintes opções:
    // Incluir contato
    // Consultar contato
    // Excluir contato
    // Sair
    do
    {
        opc = show_Menu();

        if (opc != 1 && opc != 2 && opc != 3 && opc != 4)
        {
            system("cls");
            printf("Opcao invalida!!\n");
        }

    } while (opc != 1 && opc != 2 && opc != 3 && opc != 4);

    if (opc == 4)
        printf("Saiu!\n");

    // Case para opções
    switch (opc)
    {
    case 1:
        show_Contats(*c);
        break;

    default:
        break;
    }

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
    //     printf("---CONTATO %i---\n", i+1);
    //     printf("Nome: %s\n", c[i].nome);
    //     printf("Idade: %i\n", c[i].idade);

    // }

    return 0;
}
