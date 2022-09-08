#include <locale.h> //PARA CARACTERES ESPECIALS
#include <stdio.h> //EXECUÇÃO SEM WARNING

int main(void)
{
    setlocale(LC_ALL, ""); //PARA CARACTERES ESPECIALS
/*    int entrada, maior, menor;

    printf("digite o valor: ");
    scanf("%d", &entrada);

    maior = entrada;
    menor = entrada;

    for (int i = 1; i <= 4; i=i+1 ){
        printf("digite o valor: ");
        scanf("%d", &entrada);
//com if
        if (entrada > maior){
            maior = entrada;
        } else if (entrada < menor){
            menor = entrada;
        }
//com if internario
       // maior = entrada > maior ? entrada : maior;
       // menor = entrada < menor ? entrada : menor;

    }
    printf("\n maior número %d", maior);
    printf("\n menor número %d", menor);
    printf("\n");
*/
    //com array

    int entrada,a=0,b=0;
    int vetor[5];

    for (int i = 0; i <= 4; i=i+1 ){
        a=a+1;
        printf("Digite o %dº valor: ",a);
        scanf("%d", &entrada);
        vetor[i] = entrada;
    }
    a = 0;
    for (int i = 0; i <= 4; i=i+1 ){
        printf("%d",vetor[i]);
        if (a < vetor[i]) {
          a = vetor[i];
        }
    }
    b=a;
    for (int i = 0; i <= 4; i=i+1 ){
        printf("%d",vetor[i]);
        if (b > vetor[i]) {
          b = vetor[i];
        }
    }
    printf("\n Maior valor é %d: ",a);
    printf("\n Menor valor é %d: ",b);
}
