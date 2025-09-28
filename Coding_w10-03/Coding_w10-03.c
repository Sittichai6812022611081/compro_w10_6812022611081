#include <stdio.h>                          // ประกาศ librady มาตรฐาน
#include <string.h>                         // ประกาศ librady string

int main(){                                 // ประกาศฟังก์ชันหลัก
char name_1[30], name_2[30];                // ประกาศตัวแปรเก็บชื่อ
 
    printf("Enter name of customer 1: ");   // แสดงข้อความ Enter name of customer 1:
    scanf("%s", &name_1);                   // รับค่าจากผู้ใช้และเก็บในตัวแปร name_1
    printf("Enter name of customer 2: ");   // แสดงข้อความ Enter name of customer 2:
    scanf("%s", &name_2);                   // รับค่าจากผู้ใช้และเก็บในตัวแปร name_2

    if (strcmp(name_1, name_2) == 0){                                               // เปรียบเทียบค่าของ name_1 กับ name_2 ถ้าเหมือนกันจะคืนค่าเป็น 0
        printf("Both of your names are the same , which is %s.\n", name_1);         // แสดงข้อความ Both of your names are the same , which is ตามด้วยค่าที่ได้จากตัวแปร name_1
        int number_1 = strlen(name_1);                                              // ประกาศตัวแปร number_1 นับความยาวของชื่อที่เก็บในตัวแปร name_1
        printf("The length of the anme is %d characters.\n", number_1);             // แสดงข้อความ The length of the anme is พร้อมค่าที่ได้จากตัวแปร number_1
    }else{                                                                          // ถ้าไม่เหมือนกัน
        int number_1 = strlen(name_1);                                              // ประกาศตัวแปร number_1 นับความยาวของชื่อที่เก็บในตัวแปร name_1
        printf("Customer 1: %s (%d characters)\n",name_1, number_1);                // แสดงข้อความ Customer 1: ตามด้วยค่าที่ได้จากตัวแปร name_1 (ค่าที่ได้จากตัวแปร number_1 characters)
        int number_2 = strlen(name_2);                                              // ประกาศตัวแปร number_2 นับความยาวของชื่อที่เก็บในตัวแปร name_2
        printf("Customer 2: %s (%d characters)\n",name_2, number_2);                // แสดงข้อความ Customer 2: ตามด้วยค่าที่ได้จากตัวแปร name_2 (ค่าที่ได้จากตัวแปร number_2 characters)
    }
    return 0;                                                                       // จบการทำงานของโปรแกรม
}