// PROJETO AGENDA EM C
// ESTUDANTES: HENRIQUE S., YAGO,YURI, GABRIEL FLÔR, EMANOEl.

// BIBLIOTECAS UTILIZADAS
#include <stdio.h>
#include <stdlib.h>
#include "contato.h" //Incluo o struct Contato que criei em outro arquivo

#define QTD 3

// FUNCÃO ADICIONAR CONTATO
//  add_contato(char nome, int idade){
//      printf("Hello World!!\n");
//  };

// Função que mostra o menu e retorna a opção escolhida pelo usuário
int show_Menu()
{
    int opc;
    printf("______MENU______\n\n");
    printf("|1 - CONSULTAR CONTATO\n");
    printf("|2 - INCLUIR CONTATO\t");
    printf("|3 - EXCLUIR CONTATO\t");
    printf("|4 - SAIR\n");
    printf("Opcao: ");
    scanf("%i", &opc);
    fflush(stdin);
    return opc;
}

// Mostrar lista de Contatos
void show_Contats(Contato *c)
{
    system("cls");

    printf("---Dados---\n");
    for (int i = 0; i < QTD; i++)
    {
        printf("---CONTATO %i---\n", i + 1);
        printf("Nome: %s\n", c[i].nome);
        printf("Idade: %i\n", c[i].idade);
    }
}

// FUNÇÃO PRINCIPAL
int main(void)
{
    int opc;
    Contato c[QTD] = {
        {"Ana", 19},
        {"Bruno", 23},
        {"Clara", 25},
    };

    while (opc != 4)
    {
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
            return printf("Saiu!\n");

        // Case para opções
        switch (opc)
        {
        case 1:
            show_Contats(c);
            break;
        default:
            break;
        }
    }

    return 0;
}
