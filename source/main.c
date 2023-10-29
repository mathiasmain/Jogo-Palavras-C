

//* Informação importante
//! Aviso ruim
//? Should?
// TODO
//@param myParam o parametro para este método

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h> // Adiciona sleep
#include <time.h>
#include <math.h>
#include <string.h>
#include "arquivos.c"
#include "game.c"

// #define NDEBUG
// #include <assert.h>
// #define ll long long
// assert

void Insert();

void Erased();

void Consult();

void Game();

int main(void)
{
    // Inicializando pasta repo.txt

    bool sair = 0;

    while (sair == 0)
    {
        // Início
        printf("\nOque deseja fazer?\n\n");
        printf("\t[1] Jogar\n");
        printf("\t[2] Consultar pontuação");
        printf("\t[3] Entrar no repositório");
        printf("\t[4] Sair\n\n");

        char buffer1[3];

        fgets(buffer1, 3, stdin);

        switch (buffer1[0])
        {

            case 1: // Jogar
                
                Game();
                break;
            
                
            

            case 2: // Consultar pontuação;
                Points();
                break;

            

            case 3:
             // Entrar no repositório

                printf("Que ação deseja realizar?\n\n");

                printf("[1] Adicionar palavra\n");
                printf("[2] Retirar palavra\n");
                printf("[3] Consultar palavras\n");
                pritnf("[4] Voltar ao menu\n\n");

                char buffer2[3];

                fgets(buffer2, 3, stdin);

                switch(buffer2[0])
                {

                    case 1: // Add palavra
                        Insert();
                        break;
                    

                    case 2: // Retirar palavra
                        Erased();
                        break;
                    
                    case 3: // Consultar palavras
                        Consult();
                        break;

                    case 4: // Voltar ao menu principal

                        break;
                }
                break;
            

            case 4: // Sair

                printf("Obrigado por jogar!\n");
                printf("Fechando...\n");
                sleep(2);
                sair = 1;
                break;

            default:
                printf("Escolha uma das opções disponíveis!\n");
                break;
            }

        return 0;
    }
}
