#include <stdio.h>
#include <stdbool.h>

/**
 * Escreva uma função que analisa uma dada palavra ou frase, retornando se a mesma é um palíndromo ou não.
 * 
 * Função: bool isPalindrome (char[] sentence, int length)
 * Input:
 * - sentence: array de caracteres em minúsculo da palavra ou frase a ser analisada.
 * - length: tamanho do array - número de caracteres
 * Output: true se a sentença é um palídromo, falso caso negativo.
 */

//Função que checa se a string é um palíndromo
int isPalindrome (char sentence[], int length)
{
    //Começa dos extremos da palavra
    int l = 0;
    int h= length - 1;
 
    // Continua comparando enquanto eles são iguais
    while (h > l)
    {
        if (sentence[l++] != sentence[h--])
        {
            return  0;
        }
    }
            return  1;
}


int main(void)
{
    char sentence[100];
	int c = 0, length = 0;
    printf("Digite uma palavra: ");
    scanf("%s",&sentence);
	
while (sentence[c++] != '\0') length++;

if (isPalindrome(sentence,length)) {
  printf("True");
}
else {
  printf("False");
}
}





 
