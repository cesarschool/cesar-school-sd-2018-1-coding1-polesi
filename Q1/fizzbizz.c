#include <stdio.h>
/**
 * Implemente a função FizzBizz conforme definida abaixo. A mesma deve receber dois números inteiros não negativos (start e end) e imprimir a partir de start (incluído) até end (excluído) seguindo a mesma lógica do FizzBuzz.
 * 
 * Função: void fizzBizz(int start, int end)
 * Input: inteiros (start < end) determinando os números de início e fim da contagem.
 * Output: utilize a função printf da biblioteca stdio.h e escreva um número ou palavra por linha (\n):
 * 
 */

void FizzBuzz(int n1, int n2)
{
    for ( ; n1<n2; n1++)
    {
        if(((n1%3)||(n1%5))== 0)
            printf("FizzBuzz\n");
        else if((n1%3)==0)
            printf("Fizz\n");
        else if((n1%5)==0)
            printf("Buzz\n");
        else
            printf("%d\n", n1);
            
   }
}

int main(void)
{
    int n1, n2;
    printf("Escreva o número inicial: ");
    scanf("%d",&n1);
    printf("Escreva o número final: ");
    scanf("%d",&n2);
    FizzBuzz(n1, n2);

}
