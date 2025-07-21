#include <stdio.h>

int main() {
    char name;                 // ตัวอักษรชื่อเล่น
    int age;                   // อายุ
    float height;              // ส่วนสูง
    char subject;              // ชื่อวิชา (ตัวอักษรย่อ)
    float grade;               // เกรดที่ได้
    char gradeChar;            // ตัวอักษรเกรด
    printf("Enter your name, age, height, subject, grade, grade symbol: ");
    scanf(" %c %d %f %c %f %c", &name, &age, &height, &subject, &grade, &gradeChar);

    printf("%c is %d years old and %.1f centimeters tall.\n", name, age, height);
    printf("In subject %c, %c got %.2f which is symbolized as '%c'.\n", subject, name, grade, gradeChar);

    return 0;
}