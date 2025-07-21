#include <stdio.h>

struct Person {
    char name;
    int age;
    float height;
    float weight;
    char grade;
};

int main() {
    struct Person people[3];

    printf("กรุณาป้อนข้อมูลจำนวน 3 คน:\n");
    printf("รูปแบบข้อมูล: ชื่อเล่น อายุ ส่วนสูง น้ำหนัก รหัสเกรด\n");
    printf("ตัวอย่าง: A 21 175.5 90.2 A\n\n");

    // รับข้อมูล
    for(int i = 0; i < 3; i++) {
        printf("ป้อนข้อมูลคนที่ %d: ", i + 1);
        scanf(" %c %d %f %f %c",
              &people[i].name,
              &people[i].age,
              &people[i].height,
              &people[i].weight,
              &people[i].grade);
    }

    // แสดงผล
    printf("\n+-------+-----+-----------+-----------+------------+\n");
    printf("| Name  | Age | Height(cm)| Weight(kg)| Grade Code |\n");
    printf("+-------+-----+-----------+-----------+------------+\n");

    for(int i = 0; i < 3; i++) {
        printf("|   %c   | %3d |   %6.1f  |   %6.1f  |     %c      |\n",
               people[i].name,
               people[i].age,
               people[i].height,
               people[i].weight,
               people[i].grade);
    }

    printf("+-------+-----+-----------+-----------+------------+\n");

    return 0;
}