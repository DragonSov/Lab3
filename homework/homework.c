#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    double a, b, c, S, P;

    setlocale(LC_CTYPE, "RUS");

    printf("������� ��� ������ �������������� ������������: ");
    scanf("%lf %lf", &a, &b);

    c = sqrt(a * a + b * b);   // ����������
    S = 0.5 * a * b;           // �������
    P = a + b + c;             // ��������

    printf("������� ������������: %.2f\n", S);
    printf("�������� ������������: %.2f\n", P);

    return 0;
}
