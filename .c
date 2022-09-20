боже помогите
#include <stdio.h>
#include <locale.h>
#define Fkg 0.453592
#define Fg 453.592
#define Ft 0.0004535
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int poundkg, poundg, poundt;
	float result;
	puts("введите фунты для перевода в килограммы");
	scanf("%d", &poundkg);
	result = Fkg * poundkg;
	printf("%d фунтов – это % 9.1f кг\n", poundkg, result);
	puts("введите фунты для перевода в граммы");
	scanf("%d", &poundg);
	result = Fg * poundg;
	printf("%d фунтов – это % .f г\n", poundg, result);
	puts("введите фунты для перевода в тонны");
	scanf("%d", &poundt);
	result = Ft * poundt;
	printf("%d фунтов – это % .1f т\n", poundt, result);
	//Написать и отладить программу пересчета из фунтов в кг, граммы и тонны;
}
