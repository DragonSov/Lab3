#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int num1, num2;

	puts("Введите число 1:");
	scanf("%d", &num1);
	printf("Введено число 1: %d\n", num1);

	puts("Введите число 2:");
	scanf("%d", &num2);
	printf("Введено число 2: %d\n", num2);

	printf("Сумма: %d\n", num1 + num2);
	printf("Разность: %d\n", num1 - num2);
	printf("Произведение: %d\n", num1 * num2);
	printf("Частное: %d\n", num1 / num2);
	printf("Остаток от деления: %d\n", num1 % num2);
}