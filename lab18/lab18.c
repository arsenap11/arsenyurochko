//1
#include <stdio.h>
int main(void)
{
 struct {
 int a;
 int b;
 } 
 x, y;
 x.a = 10;
 y = x; /* присвоювання одної структури другій */
 printf("%d", y.a);
 return 0;
} 

//2
#include <stdio.h>
/* визначення структури*/
struct student
{
 char name[30];
 int kurs;
 int age;
};
int main()
{
 /* оголошення змінної stud1 типу struct student*/
 struct student stud1;
 printf("Vvedit imya:");
 gets(stud1.name);
 printf("Vvedit vik:");
 scanf("%d", &stud1.age);
 printf("Vvedit kyrs:");
 scanf("%d", &stud1.kurs);
 printf("Student %s\n", stud1.name);
 printf("Kyrs %d\n", stud1.kurs);
 printf("Vik %d\n", stud1.age);
} 

//3 
#include <stdio.h>
/* визначення структури*/
struct student
{
 char name[30];
 int kurs;
 int age;
};
int main()
{
 /* оголошення масиву на 10 структур */
 struct student stud[10];
 int i, n;
 printf("Kilkict studentiv:");
 scanf("%d", &n);
 for(i=0;i<n;i++)
 {
 printf("Vvedit imya:");
 scanf("%s", stud[i].name);
 printf("Vvedit vik:");
 scanf("%d", &stud[i].age);
 printf("Vvedit kurs:");
 scanf("%d", &stud[i].kurs);
 }
 /* Виведення */
 for(i=0;i<n;i++)
 {
 printf("Student %s\n", stud[i].name);
 printf("Kurs %d\n", stud[i].kurs);
 printf("Vik %d\n", stud[i].age);
 }
} 

//4
#include <stdio.h>
// Визначення структури для зберігання інформації про працівника
struct Employee {
    char name[50];
    float weight;
    float height;
    int age;}
int main() {
    // Оголошення змінної типу структури Employee
    struct Employee emp;
    // Зчитування інформації з клавіатури
    printf("Ім'я працівника: ");
    scanf("%s", emp.name);

    printf("Вага працівника: ");
    scanf("%f", &emp.weight);

    printf("Висота працівника: ");
    scanf("%f", &emp.height);

    printf("Вік працівника: ");
    scanf("%d", &emp.age);

    // Виведення інформації про працівника
    printf("\nІнформація про працівника\n");
    printf("----------------------------------------\n");
    printf("Ім'я: %s\n", emp.name);
    printf("Вага: %.2f\n", emp.weight);
    printf("Висота: %.2f\n", emp.height);
    printf("Вік: %d\n", emp.age);
    return 0;}
