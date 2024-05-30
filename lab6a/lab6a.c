//1
#include <stdio.h>
int main() {
    int integer = 10;
    float floating = 3.14;
    char character = 'A';
    long long_num = 123456789;

    // Виведення значень з різними модифікаторами специфікації перетворення
    printf("Integer: %d\n", integer);                // integer без модифікатора
    printf("Float: %f\n", floating);                  // floating без модифікатора
    printf("Character: %c\n", character);             // character без модифікатора
    printf("Long: %ld\n", long_num);             // long_num з модифікатором l для long
}

//2
#include <stdio.h>

int main() {
    char symbols[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int x;

    printf("Символ\tДесяткове\tВісімкове\tШістнадцяткове\n");
    for (x = 0; x < 10; x++) {
        printf("%c\t%d\t\t%o\t\t%x\n", symbols[x], symbols[x], symbols[x], symbols[x]);
    }
}

//3
#include <stdio.h>
int main() {
    // Оголошення змінних
    float price[5], quantity[5];
    float total[5];
    int x;

    // Введення цін та кількостей товарів з клавіатури
    printf("Введіть ціни та кількості товарів:\n");
    for (x = 0; x < 5; x++) {
        printf("Товар %d:\n", x + 1);
        printf("Ціна: ");
        scanf("%f", &price[x]);
        printf("Кількість: ");
        scanf("%f", &quantity[x]);
        total[x] = price[x] * quantity[x];
    }

    // Виведення результатів у вигляді таблиці
    printf("\n%-10s%-10s%-10s%-10s\n", "Товар", "Ціна", "Кількість", "Сума");
    for (x = 0; x < 5; x++) {
        printf("%-10d%-10.2f%-10.2f%-10.2f\n", x + 1, price[x], quantity[x], total[x]);
    }
}

//4
#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {
    float radius, circumference, area;

    // Введення радіуса круга з клавіатури
    printf("Введіть радіус круга: ");
    scanf("%f", &radius);

    // Обчислення довжини кола та площі круга
    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    // Виведення результатів
    printf("Довжина кола: %.2f\n", circumference);
    printf("Площа круга: %.2f\n", area);
}

//5
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    float discriminant, root1, root2;

    // Введення коефіцієнтів з клавіатури
    printf("Добрий день.\nЗадайте коефіцієнти a, b, і c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Обчислення дискримінанта
    discriminant = b * b - 4 * a * c;

    // Перевірка дискримінанта для визначення коренів
    if (discriminant > 0) {
        // Два різних дійсних корені
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("За розрахунками в мене вийшли такі корені рівняння: %.2f та %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        // Один дійсний корінь
        root1 = -b / (2 * a);
        printf("За моїми розрахунками рівняння має один подвійний корінь: %.2f\n", root1);
    } else {
        // Корені у вигляді комплексних чисел
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("За розрахунками в мене вийшли такі корені рівняння: %.2f + %.2fi та %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

//6
#include <stdio.h>
int main() {
    char ch;
    printf("Введіть символи. Для завершення натисніть звукову клавішу (наприклад, Ctrl+G):\n");
    while ((ch = getchar()) != 7) { // 7 - ASCII код звукової клавіші (Ctrl+G)
        putchar(ch);
    }
}

//7
#include <stdio.h>
#include <math.h>
int main() {
    // Задані координати вершин трикутника
    int k = 5;
    int x1 = 1, y1 = 1;
    int x2 = 2 * k, y2 = 2 * k - 1;
    int x3 = -2 * k, y3 = k + 2;

    // Обчислення відстані між точками
    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    // Обчислення півпериметра
    double p = (a + b + c) / 2;

    // Обчислення радіуса вписаного кола
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    double r = s / p;

    // Виведення результатів
    printf("Периметр трикутника: %.2f\n", a + b + c);
    printf("Площа трикутника: %.2f\n", s);
    printf("Радіус вписаного кола: %.2f\n", r);
}

//8
#include <stdio.h>
#include <math.h>

int main() {
    double a = 100.0, b = 0.001;
    double result;

    result = (pow(a - b, 4) - (pow(a, 4) - 4 * pow(a, 3) * b)) / (6 * pow(a, 2) * pow(b, 2) - 4 * a * pow(b, 3) + pow(b, 4));

    printf("Результат виразу при a = %.4f та b = %.4f: %.6f\n", a, b, result);

    return 0;
}
