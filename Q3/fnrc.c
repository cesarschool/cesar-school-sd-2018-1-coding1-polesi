#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
#include <stdio.h>
 
int contarLetra(char frase[], char letra)
   {
   int c = 0, count = 0;

   while (frase[c] != '\0') {

      if (frase[c] == letra) {
        count++;
      }
 
      c++;
   }
 
   return count;
}

int main (void)
    {
    char frase[100];
    int c= 0;
    printf("Digite uma palavra: ");
    scanf("%s",&frase);

      while (frase[c] != '\0') {
          
      if (contarLetra(frase,frase[c]) == 1) {
      printf("%c é a primeira letra única", frase[c]);
          break;
      }
      
      c++;
      
   }
}
        
