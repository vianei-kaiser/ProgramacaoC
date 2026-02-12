# include <stdio.h>

int main () {

    int idade = 25;
    int quantidade =1;
    float altura =1.75;
    double peso=90.3;
    char letra = 'A';
    char nome[20] = "vianei";

    idade=30;

    printf("IDADE      = %d  \n", idade);
    printf("QUANTIDADE = %d  \n", quantidade);
    printf("ALTURA     = %.2f\n", altura);
    printf("PESO       = %.1f\n", peso);
    printf("LETRA      = %c  \n", letra);
    printf("NOME       = %s  \n", nome);

}