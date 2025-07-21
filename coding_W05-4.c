#include <stdio.h>

// สร้าง struct สำหรับเก็บข้อมูลแต่ละคน
struct Person {
    char name;
    int age;
    float height;
    float weight;
    char grade;
};

int main() {
    struct Person people[3]; // สร้าง array สำหรับ 3 คน

    // รับข้อมูลของแต่ละคน
    printf("Enter data for 3 people (Name Age Height Weight Grade):\n");

    for(int i = 0; i < 3; i++) {
        printf("Person %d: ", i + 1);
        scanf(" %c %d %f %f %c", 
              &people[i].name, 
              &people[i].age, 
              &people[i].height, 
              &people[i].weight, 
              &people[i].grade);
    }

    // แสดงผลข้อมูลที่รับมา
    printf("\n--- Displaying Information ---\n");
    for(int i = 0; i < 3; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: %c\n", people[i].name);
        printf("Age: %d years\n", people[i].age);
        printf("Height: %.1f cm\n", people[i].height);
        printf("Weight: %.1f kg\n", people[i].weight);
        printf("Grade: %c\n\n", people[i].grade);
    }

    return 0;
}