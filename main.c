#include <stdio.h>
//Começamos o código com uma funcão para calcular o valor bruto, como solicitado.
double calcular_salario_bruto(double x, double y){
    double salario_bruto = x * y;
    return salario_bruto;
}
//Temos uma segunda função que calcula o desconto.
double calcular_desconto(double x){
    double desconto = x * 0.09;
    return desconto;
}
//Agora, uma função que calcula o valor líquido.
double calcular_salario_liquido(double x, double y){
    double calcular_liquido = x - y;
    return calcular_liquido;
}

int main(){
    //Temos agora as declarações das variáveis a serem utilizadas.
    double salario_bruto = 0, desconto = 0, salario_liquido = 0, valor_hora = 0, horas = 0;
    //Temos um printf para estética do programa.
    printf("---Calculadora Salario---\n\n");
    //Temos agora as solicitações ao usuário.
    printf("Digite o valor das horas do funcionario: ");
    scanf("%lf", &valor_hora);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%lf", &horas);
    //Agora temos as variaveis para armazenar os valores do salario bruto, desconto e salário líquido
    salario_bruto = calcular_salario_bruto(valor_hora,horas);
    desconto = calcular_desconto(salario_bruto);
    salario_liquido = calcular_salario_liquido(salario_bruto, desconto);
    //Um printf para estética do programa
    printf("\n---Resultados---\n\n");
    //Agora, imprimo na tela os valores referente ao salário do funcionario
    printf("Salário Bruto: %.2lf\n", salario_bruto);
    printf("Desconto: %.2lf\n", desconto);
    printf("Salário Líquido: %.2lf\n", salario_liquido);
    

    return 0;
}