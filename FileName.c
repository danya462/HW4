#include <stdio.h>
#include <locale.h> 
#include <math.h>

int main() {

    setlocale(LC_CTYPE, "RUS");

    // ���� ������
    double H, Vc, Vp, S;

    printf("������� ������ H (� ������): ");
    scanf("%lf", &H);

    printf("������� �������� �������� Vc (� �/�): ");
    scanf("%lf", &Vc);

    printf("������� �������� ������ Vp (� �/�): ");
    scanf("%lf", &Vp);

    printf("������� ���������� S (� ������): ");
    scanf("%lf", &S);

    // ��������� ����� �� �������
    // T = S / (Vp - (H / S) * Vc)

    double T;
    double x = Vp - (H / S) * Vc;

    if (x <= 0) {
        printf("������ �� ����� ������� ����.\n");
        return 1;
    }

    T = S / x;

    // ����� ����������
    printf("����� �� ��������� ����: %.2f ������\n", T);

    return 0;
}