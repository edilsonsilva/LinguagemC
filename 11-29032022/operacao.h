#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"
#include "endereco.h"

void gravar(){
    cliente cli, *pcli;
    endereco end,*pend;

    pcli = &cli;
    pend = &end;

    printf("Entre com o nome do cliente:\n");
    fgets(pcli->nome,50,stdin);

    printf("Entre com o cpf do cliente:\n");
    fgets(pcli->cpf,15,stdin);

    printf("Entre com o email do cliente:\n");
    fgets(pcli->email,100,stdin);

    printf("Entre com o datanascimento do cliente usando barras:\n");
    fgets(pcli->datanascimento,10,stdin);

    printf("Entre com o telefone do cliente:\n");
    fgets(pcli->telefone,20,stdin);

    printf("Entre com o tipo de endereco do cliente:\n");
    fgets(pend->tipo,10,stdin);

    printf("Entre com o logradouro do cliente:\n");
    fgets(pend->logradouro,100,stdin);

    printf("Entre com o numero do endereco do cliente:\n");   
    fgets(pend->numero,10,stdin);

    printf("Entre com o complemento do endereco do cliente:\n");
    fgets(pend->complemento,20,stdin);

    printf("Entre com o cep do endereco do cliente:\n");
    fgets(pend->cep,20,stdin);


}
