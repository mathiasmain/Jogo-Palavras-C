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

// TODO: Mudar funções para suportar formato CSV para ser passado para uma struct.

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
        unsigned int index = 0;
        unsigned int linhak = 0;
        
        char BufferEr[32];
        char BufferTemp[32];

        rewind(!feof(arquivo));
        while(!feof(arquivo))
        {
            linhak++;
        }
        rewind(!feof(arquivo));
        char BufferCpy[linhak-1][32];
        
        
        printf("Qual palavra deseja apagar?");
        fgets(BufferEr, 32, stdin);
        
        while(fgets(BufferTemp, 32, arquivo) != NULL)
        {
            if (strcmp(BufferEr, BufferTemp) != 0)
            {
                strcpy(BufferCpy[index],BufferTemp);
                index++;
            }
        }

        fclose(arquivo);
        
        index = 0;

        FILE *arquivo;
        arquivo = fopen("repo.txt", "w+");
        
        for(unsigned int i = 0; i < linhak; i++)
        {
          fputs(BufferCpy[index], arquivo);
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
        while(!feof(arquivo))
        {
            fgets(Buffer99,32,arquivo);
            printf("%s\n", Buffer99);
        }
        
    }
}