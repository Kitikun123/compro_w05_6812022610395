#include <stdio.h>

int main() {
    char name = 'M';         // ตัวอักษรตัวแรกของชื่อ
    int age = 18   ;            // อายุ
    float weight = 80.5;     // น้ำหนัก

    // แสดงผลลัพธ์ 2 บรรทัด
    printf("Student %c is %d years old.\n", name, age);
    printf("His weighs is %.1f kg.\n", weight);

    return 0;
}