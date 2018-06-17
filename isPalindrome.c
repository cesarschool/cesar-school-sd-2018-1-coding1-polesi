#include <stdio.h>

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




