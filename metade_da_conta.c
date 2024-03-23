#include <cs50.h>
#include <stdio.h>

int main(void)
{

    float comida;
    do
    {
        comida = get_float("Valor da comida: ");
    }
    while (comida < 10.00 || comida > 999.99);

    float impostos;
    do
    {
        impostos = get_float("Porcentagem de impostos: ");
    }
    while (impostos < 0.00 || impostos > 100.00);

    float gorjeta;
    do
    {
        gorjeta = get_float("Porcentagem da gorjeta: ");
    }
    while (gorjeta < 0 || gorjeta > 100);

    float parcial = comida * (impostos / 100 + 1);
    float valor = parcial * (gorjeta / 100 + 1) / 2;
    printf("Cada um pagará R$ %.2f!\n", valor);

    return 0;
}
