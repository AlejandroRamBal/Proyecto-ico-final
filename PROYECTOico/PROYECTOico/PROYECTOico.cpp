#include<stdio.h>
#include<math.h>

int main() {

	double limInicial;
	double limFinal;
	double aumento;

	double resulExp;
	double resulE = 0;

	int c;
	int f;
	int factorial;

	scanf_s("%lf", &limInicial);
	scanf_s("%lf", &limFinal);
	scanf_s("%lf", &aumento);

	int conteo = (limFinal - limInicial) / aumento;