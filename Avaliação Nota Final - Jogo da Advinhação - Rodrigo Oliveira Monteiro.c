#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int num;
    int tentativa;
    int numtent;
    srand(time(NULL));
    int aleatorio = rand() % 100;
    
    printf("Bem vindo ao Jogo da Advinhação! \nVocê terá 10 tentativas para advinhar um número de 1 a 100 gerado aleatoriamente...\nPor favor, digite somente números de 1 a 100 para o número ser válido.");
    
    printf("\n\n1ª tentativa - Digite um número de 1 a 100: ");
    scanf("%i", &num);

        while(num > 100){
            printf("Número inválido! Digite SOMENTE um número de 1 a 100!");
            printf("\n\n1ª tentativa - Digite um número de 1 a 100: ");
            scanf("%i", &num);
        }
    
    for(tentativa = 1; tentativa <=9; tentativa++){
    
        if(num > aleatorio && num <= 100){
        numtent = tentativa+1;
        printf("O número a ser adivinhado é MENOR que %i!", num);
        printf("\n\n%iª tentativa - Digite um número de 1 a 100: ", numtent);
        scanf("%i", &num); 
        }else if(num < aleatorio && num <= 100){
        numtent = tentativa+1;
        printf("O número a ser adivinhado é MAIOR que %i!", num);
        printf("\n\n%iª tentativa - Digite um número de 1 a 100: ", numtent);
        scanf("%i", &num); 
    }else if(num > 100){
        tentativa--;
        numtent = tentativa+1;
        printf("Número inválido! Digite SOMENTE um número de 1 a 100!");
            printf("\n\n%iª tentativa - Digite um número de 1 a 100: ", numtent);
            scanf("%i", &num);
    }
}

if(num == aleatorio){
            printf("\n*****PARABÉNS! VOCÊ ACERTOU O NÚMERO!*****");
            printf("\nNúmero a ser advinhado: %i", aleatorio);
            printf("\nAcerto na %iª tentativa.", numtent);
}else{
        printf("\nO jogo acabou. Você perdeu! \n\nO número a ser advinhado era: %i",aleatorio);
        }
}