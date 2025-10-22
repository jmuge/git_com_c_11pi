#include <stdio.h>

// declaração da função para calcular a soma de dois inteiros
int soma(int a, int b);
    
int main(){

    // introduzir dois valores inteiros
    int n1, n2;
    printf("Introduza dois valores inteiros separados por espaço: ");
    scanf("%d %d", &n1, &n2);

    //printf("%d\n", n1);
    //printf("%d\n", n2);

    // chamar as funções para calcular a soma, subtração, multiplicação e divisão
    int resultado_soma = soma(n1, n2);

    return 0;

// definição da função para calcular a soma de dois inteiros
int soma(int a, int b){
    return a + b;
}

}