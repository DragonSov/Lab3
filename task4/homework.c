#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    double a, b, c, S, P;

    setlocale(LC_CTYPE, "RUS");

    printf("Введите два катета прямоугольного треугольника: ");
    scanf("%lf %lf", &a, &b);

    c = sqrt(a * a + b * b);   // гипотенуза
    S = 0.5 * a * b;           // площадь
    P = a + b + c;             // периметр

    printf("Площадь треугольника: %.2f\n", S);
    printf("Периметр треугольника: %.2f\n", P);

    return 0;
}
