# include <stdio.h>

int main () {

    char grade;

    printf("Digite uma letra: \n");
    scanf("%c", &grade);

    switch (grade) {

    case 'A':
        printf("Voce digitou %c ", &grade);
        break;

    case 'B':
        printf("Voce digitou %c ", &grade);
        break;    

    case 'C':
        printf("Voce digitou %c ", &grade);
        break;

    case 'D':
        printf("Voce digitou %c ", &grade);
        break;   

    default:
        printf("Voce não digitou nada... ");
    
    }
}