//1
//а
#include <stdio.h>
int main() {
FILE *in; // Опис вказівника на файл
int ch;
if ((in = fopen("proba", "r")) != NULL) { // Відкриття файлу для читання, перевірка чи існує
while ((ch = getc(in)) != EOF) { // Отримання символу із файла
putc(ch, stdout); // Виведення символу в стандартний вивід
}
fclose(in); // Закриття файла
} else {
printf("Файл proba не відкривається \n");}
return 0;}

//б
#include <stdio.h>
int main() {
    FILE *ff;
    int base;
    ff = fopen("sam", "r"); // Відкриття файлу для читання
    fscanf(ff, "%d", &base); // Читання значення з файла
    fclose(ff); // Закриття файла
    ff = fopen("data", "a"); // Відкриття файлу для дописування
    fprintf(ff, "sam is %d.\n", base); // Запис значення у файл
    fclose(ff); // Закриття файла
    return 0; } 

//в
#include <stdio.h>
#define LINE 80
int main() {
    FILE *ff;
    char string[LINE]; // Масив для зберігання рядка
    ff = fopen("opus", "r"); // Відкриття файлу для читання
    while (fgets(string, LINE, ff) != NULL) { // Зчитування рядків з файла
        puts(string); // Виведення рядка на екран
    }
    fclose(ff); // Закриття файла
    return 0;}

//г
#include <stdlib.h>
#include <stdio.h>
int main() {
    int f1, f2, f3, f4, f5;
    FILE *fp;
    fp = fopen("C:\\temp\\sample.txt", "r"); // Відкриття файлу для читання
    if (fp == NULL) { // Перевірка чи файл відкрито успішно
        printf("Помилка відкриття файлу\n");
        return 1;}
    // Читання з файла
    fscanf(fp, "%d\n%d\n%d\n%d\n%d\n", &f1, &f2, &f3, &f4, &f5);
    printf("Значення: %d, %d, %d, %d, %d\n", f1, f2, f3, f4, f5);
    fclose(fp); // Закриття файла
    return 0;}

//3
// Запис файлу
#include <stdio.h>
int main() {
FILE *pf; // Вказівник на файл
int k;
// Відкриття файлу для запису
if ((pf = fopen("proba.txt", "w")) == NULL) { // Перевірка чи відкриття файлу пройшло успішно
perror("proba.txt"); // Виведення повідомлення про помилку
return 1; // Повернення коду помилки
}
// Запис даних у файл
for (k = 0; k <= 5; k++) {
fprintf(pf, "%d %d\n", k, k*k*k*k); // Запис значень у файл
}
fclose(pf); // Закриття файлу
return 0;} 

// Читання даних із файлу proba.txt
#include <stdio.h>
int main() {
FILE *pf; // Вказівник на файл
int n, nn, l;
// Відкриття файлу для читання
if ((pf = fopen("proba.txt", "r")) == NULL) { // Перевірка чи відкриття файлу пройшло успішно
perror("proba.txt"); // Виведення повідомлення про помилку
return 1; } // Повернення коду помилки
}
// Читання даних з файлу
for (l = 0; l <= 5; l++) {
fscanf(pf, "%d %d\n", &n, &nn); } // Зчитування значень з файла
fclose(pf); // Закриття файлу
return 0;} 

//4
#include <stdio.h>

int main() {
    FILE *file;
    int i, number;

    // Відкриття файлу для запису
    file = fopen("numbers.txt", "w");
    if (file == NULL) {
        printf("Не вдалося відкрити файл для запису.\n");
        return 1;
    }

    // Запис чисел від 1 до 12 у файл
    for (i = 1; i <= 12; i++) {
        fprintf(file, "%d\n", i);
    }

    // Закриття файлу після запису
    fclose(file);

    // Відкриття файлу для читання
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Не вдалося відкрити файл для читання.\n");
        return 1;
    }

    // Зчитування чисел з файлу та виведення їх на екран
    printf("Числа з файлу:\n");
    while (fscanf(file, "%d", &number) != EOF) {
        printf("%d\n", number);
    }

    // Закриття файлу після читання
    fclose(file);

    return 0;
}
