#include <stdio.h>
    

  
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