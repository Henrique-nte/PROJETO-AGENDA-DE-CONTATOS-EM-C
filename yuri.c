#include <stdio.h>
#include <string.h>


#include "main.h"



int main()
{
    char nome[50];
    char telefone[15];

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // remove \n

    printf("Digite o telefone: ");
    fgets(telefone, sizeof(telefone), stdin);
    telefone[strcspn(telefone, "\n")] = '\0'; // remove \n

    if (validate_Name(nome))
        printf("Nome valido!\n");
    else
        printf("Nome invalido!\n");

    if (validate_Phone(telefone))
        printf("Telefone valido!\n");
    else
        printf("Telefone invalido!\n");

    return 0;
}
