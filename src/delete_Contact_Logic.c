// PROJETO AGENDA EM C
// ESTUDANTES: HENRIQUE S., YAGO,YURI, GABRIEL FLÔR, EMANOEl.

// CABEÇALHOS
#include "../include/main.h"
#include "../include/menu.h"
#include "../include/contacts.h"
#include "../include/validators.h"
#include "../include/delete_Contact_Logic.h"

// BIBLIOTECAS UTILIZADAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //Biblioteca de string
#include <stdbool.h> //Permite tipos booleano
#include <unistd.h>  // #include <windows.h> //No windows

void delete_Contact_Logic(Contato *contatos)
{
    char name[50];
    int exist;
    // Deletar
    do
    {
        printf("----DELETAR CONTATO-----\n");
        printf("Nome do contato: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0'; // remove o \n

        exist = contact_Exists(name, contatos);

        if (!exist)
        {
            printf("Erro: Contato não existe!!\n");
            // system("clear");
        }

    } while (exist == 0);

    // Deleta no array
    delete_Contact(name, contatos);
}