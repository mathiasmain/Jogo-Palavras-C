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
    FILE *arquivo, *temp_file;
    arquivo = fopen("repo.txt", "a");
    temp_file = fopen("temp.txt", "w+");

    if (arquivo == NULL || temp_file == NULL)
    {
        printf("Não foi possível abrir o arquivo!\n");
        EXIT_FAILURE;
    }
    else
    {
        char BufferEr[32];
        char BufferTemp[32];

        printf("Qual palavra deseja apagar?");
        fgets(BufferEr, 32, stdin);
        
        while(fgets(BufferTemp, 32, arquivo) != NULL)
        {
            if (strcmp(BufferEr, BufferTemp) != 0)
            {
                fputs(BufferTemp,temp_file);
            }
        }

        fclose(arquivo);
        
        FILE *arquivo;
        arquivo = fopen("repo.txt", "w+");
        
        char Buffer56[32];

        while(!feof(arquivo))
        {
          fgets(Buffer56, 32, temp_file);
          fputs(Buffer56, arquivo);

        }
        
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
            printf("%s\n", Buffer99);
        }
        
    }
}