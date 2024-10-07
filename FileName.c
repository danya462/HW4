#include <stdio.h>
#include <locale.h> 
#include <math.h>

int main() {

    setlocale(LC_CTYPE, "RUS");

    // Ввод данных
    double H, Vc, Vp, S;

    printf("Введите высоту H (в метрах): ");
    scanf("%lf", &H);

    printf("Введите скорость самолета Vc (в м/с): ");
    scanf("%lf", &Vc);

    printf("Введите скорость ракеты Vp (в м/с): ");
    scanf("%lf", &Vp);

    printf("Введите расстояние S (в метрах): ");
    scanf("%lf", &S);

    // Вычисляем время до встречи
    // T = S / (Vp - (H / S) * Vc)

    double T;
    double x = Vp - (H / S) * Vc;

    if (x <= 0) {
        printf("Ракета не может достичь цели.\n");
        return 1;
    }

    T = S / x;

    // Вывод результата
    printf("Время до поражения цели: %.2f секунд\n", T);

    return 0;
}