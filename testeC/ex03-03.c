#include <stdio.h>
#include <ctype.h>

// Jogo de perguntas

int main() {
    char pergunta[][100] = {"Qual ano a linguagem C foi lançada?: \n",
                           "Quem foi o criador da linguagem C?: \n",
                           "Qual foi o predecessor da linguagem C?: \n"};
    char opcoes[][100] = {"A: 1969", "B: 1972", "C: 1975", "D: 1999 \n",
                          "A: Dennis Ritchie", "B: Nikola Tesla", "C: John Carmark", "D: Doc Brow",
                          "A: Objetivo C", "B: B", "C: C++", "D: C#" };

    char resposta[3] = {'B', 'A', 'B'};
    int numeroDePerguntas = sizeof(pergunta) / sizeof(pergunta[0]);
    char adivinha;
    int pontos;

    printf("Jogo de perguntas \n");

    for (int i = 0; i < numeroDePerguntas; i++)
    {   
        printf("------------------\n");
        printf("%s\n", pergunta[i]);
        printf("******************\n");

        for (int y = (i * 4); y < (i * 4) + 4; y++)
        {
            printf("%s\n", opcoes[y]);
        }
        
        printf("Resposta: ");
        printf("%c", &adivinha);
        printf("%c \n");

        adivinha = toupper(adivinha);

        if (adivinha == resposta[i])
        {
            printf("CORRETO! :)\n");
            pontos++;
        }else {
            printf("Errado :( \n");
        }
        
    }
    printf("------------------");
    printf("PONTUACAO FINAL: %d/%d\n", pontos, numeroDePerguntas);
    printf("------------------");
}