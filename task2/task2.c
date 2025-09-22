#include <stdio.h>
#include <locale.h>

#define      D       2.54
#define      P       2.32

int main()
{
	int dym;
	float result_d, result_p;

	setlocale(LC_CTYPE, "RUS");
	
	puts("Введите дюймы:");
	scanf("%d", &dym);

	result_d = D * dym;
	result_p = P * dym;

	printf("%d английских дюймов – это %.2f см\n", dym, result_d);
	printf("%d испанских дюймов – это %.2f см", dym, result_p);

	return 0;
}