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

	if (limInicial == 0 && limFinal == 0) {
		resulExp = 1;
		resulE = 1;
		printf("%f %f %f", limInicial, resulE, resulExp);
		return 0;
	}
	else if (aumento == 0) {
		return 1;
	}

	while (limInicial <= limFinal + aumento)
	{

		for (c = 0; c <= conteo; c++)
		{
			factorial = 1;

			for (f = 1; f <= c; f++)
			{
				factorial = factorial * f;
			}

			resulE = resulE + (pow(limInicial, c)) / factorial;
		}

		resulExp = exp(limInicial);

		printf("%f %f %f\n", limInicial, resulE, resulExp);
		
		limInicial = limInicial + aumento;
		resulE = 0;
	}
}