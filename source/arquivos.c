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

void Insert()
{

    FILE *arquivo;
    arquivo = fopen("repo.txt", "a");

    if (arquivo == NULL)
    {
        printf("Não foi possível abrir o arquivo!\n");
        EXIT_FAILURE;
    }
    else
    {
        char buffer5[32] = "papanamericano";

        while(buffer5[0] != 0)
        {
            if (feof(arquivo) == 1)
            printf("\nQual palavra deseja adicionar? [0] Para sair | máx: 30 caracteres.\n");
            
            fgets(buffer5, 32, stdin);
            fprintf(arquivo, "%s\n", buffer5);
        
            
        }
        
        fclose(arquivo);
    }
}

void Erased()
{
    FILE *arquivo;
    arquivo = fopen("repo.txt", "a");

    if (arquivo == NULL)
    {
        printf("Não foi possível abrir o arquivo!\n");
        EXIT_FAILURE;
    }
    else
    {
        size_t linhas = 0;
        size_t *linhas2;
        *linhas2 = 0;
        size_t linhas3 = 0;
        bool achou = 0;

        while(!feof(arquivo)){
            linhas++;
        }
        
        printf("Qual palavra deseja retirar? máx: 30 caracteres.\n");

        char buffer6[32];
        char buffer7[32];
        char Transport[linhas][32];

        fgets(buffer6, 32, stdin);
        
        while(fgets(buffer7, 32, arquivo));
        {
            if (buffer7 == buffer6)
            {
                rewind(arquivo);
                while(!feof(arquivo))
                {
                    if (linhas3 == *linhas2)
                    {
                        continue;
                    }
                    else{
                        fgets(Transport, 32, arquivo);
                    }
                
                    linhas3++;
                }

                fclose(arquivo);

                FILE* arquivo2 = fopen("repo.txt","w+");

                if (arquivo == NULL)
                {
                    printf("Não foi possível abrir o arquivo!");
                    EXIT_FAILURE;
                }
                else
                {
                for(size_t x = 0; x < linhas; x++)
                {
                    fputs("%s\n", Transport[x]);
                }                
                fclose(arquivo2);
                EXIT_SUCCESS;
                }
                
            }

            if(feof(arquivo) == 1)
            {
                
                printf("Esta palavra não está registrada no repositório, logo, não é possível retirá-la.\n");fclose(arquivo);
                EXIT_SUCCESS;
            }
            
            *linhas2++;
        }
        fclose(arquivo);
    }
}

void Consult()
{
    size_t linhas6 = 0;
    FILE *arquivo;
    arquivo = fopen("repo.txt", "r+");

    if (arquivo == NULL)
    {
        printf("Não foi possível abrir o arquivo!");
        EXIT_FAILURE;
    }
    else
    {
        char Buffer99[32];
        while(!feof)
        {
            fgets(Buffer99,32,arquivo);
            fputs();
        }
        
    }
}