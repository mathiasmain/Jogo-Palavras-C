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


// #define NDEBUG
// #include <assert.h>
// #define ll long long
// assert



void Game()
{

 FILE *arquivo;
    char filename[] = "repo.txt";

    arquivo = fopen(filename, "r");

    if (arquivo == NULL) {
        printf("O arquivo %s não existe, entre no Repositótio para adicionar uma palavra.\n", filename);
    } else {
        
        uint8_t NumbWords = 0;
        uint8_t NumbWords2 = 0;
        while(!feof(arquivo))
                {
                    NumbWords++;
                }
        srand(time(NULL));

        char PickWord[32];
        int SelectedWordPosition = rand() % NumbWords;
        while(!feof(arquivo))
        {
            if (NumbWords2 = NumbWords)
            {
                fgets(PickWord, 32, arquivo);
                break;
            }
            NumbWords2++;
        }

        

        // Selecionar nível de dificuldade;

        int dificuldade = 0;
        pritnf("Insira o nível da dificuldade que deseja jogar:\n\n");

        pritnf("\t[1] Difícil\n");
        printf("\t[2] Impróprio\n");
        printf("\t[3] GOW\n");
        scanf("%d", &dificuldade);

        // TODO 

        swtch(dificuldade);
        {
            case 1:
                
                          


            case 2:




            case 3:

        }

        



        fclose(arquivo);
    }

