#include <stdio.h>

// declaração da função para calcular a soma de dois inteiros
int soma(int a, int b);

// declarar as outras funções subtrair, multiplicar e dividir
int subtrair(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);

// função para imprimir resultados
void imprimir_resultados(int soma, int subtracao, int multiplicacao, float divisao);


int main(){

    // introduzir dois valores inteiros
    int n1, n2;
    printf("Introduza dois valores inteiros separados por espaço: ");
    scanf("%d %d", &n1, &n2);

    //printf("%d\n", n1);
    //printf("%d\n", n2);

    // chamar as funções para calcular a soma, subtração, multiplicação e divisão
    int resultado_soma = soma(n1, n2);
    int resultado_subtracao = subtrair(n1, n2);
    int resultado_multiplicacao = multiplicar(n1, n2);
    float resultado_divisao = dividir(n1, n2);

    // chamar a função para imprimir
    imprimir_resultados(resultado_soma, resultado_subtracao, resultado_multiplicacao, resultado_divisao);
    return 0;

}

// definição da função para calcular a soma de dois inteiros
int soma(int a, int b) {
    return a + b;
}

// definir as outras funções subtrair, multiplicar e dividir
int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Erro: Divisão por zero!\n");
        return 0; // Retorna 0 em caso de divisão por zero
    }
}

void imprimir_resultados(int soma, int subtracao, int multiplicacao, float divisao) {
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);
}
