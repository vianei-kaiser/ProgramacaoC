# include <stdio.h>

int main () {

    int idade = 25;
    int quantidade =1;
    float altura =1.75;
    double peso=90.3;
    char letra = 'A';
    char nome[20] = "vianei";

    idade=30;

    printf("======================\n", nome);
    printf("IDADE      = %d  \n", idade);
    printf("QUANTIDADE = %d  \n", quantidade);
    printf("ALTURA     = %.2f\n", altura);
    printf("PESO       = %.1f\n", peso);
    printf("LETRA      = %c  \n", letra);
    printf("NOME       = %s  \n", nome);
    printf("======================\n\n\n", nome);

    printf("******* ENTRADA DE DADOS ********\n");

    printf("Qual o seu nome: ");
    scanf("%s", nome);   // NÃO usa & para string

    printf("Qual a sua idade: ");
    scanf("%d", &idade); // usa & para int

    printf("Qual a sua altura: ");
    scanf("%f", &altura); // usa & para float

    printf("Qual o seu peso: ");
    scanf("%lf", &peso); // usa & para double

    printf("\n******* DADOS INFORMADOS ********\n");


    printf("########## NOVOS DADOS ##########\n", nome);
    printf("IDADE      = %d  \n", idade);
    printf("QUANTIDADE = %d  \n", quantidade);
    printf("ALTURA     = %.2f\n", altura);
    printf("PESO       = %.1f\n", peso);
    printf("LETRA      = %c  \n", letra);
    printf("NOME       = %s  \n", nome);
    printf("#################################\n\n\n", nome);


}