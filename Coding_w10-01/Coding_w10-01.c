#include <stdio.h>                          //ประกาศใช้ไลบรารีมาตรฐาน

int main(){                                 //ฟังก์ชันหลัก
    int number, score;                      // ประกาศตัวแปรจำนวนเต็ม
    float average, total = 0;               // ประกาศตัวแปรทศนิยม

    printf("Enter number of students: ");                           // แสดงข้อความ Enter number of students:
    scanf("%d", &number);                                           // รับค่าจำนวนเต็มจากผู้ใช้และเก็บในตัวแปร number
    printf("Enter %d student scores (one per line):\n", number);    // แสดงข้อความ Enter พร้อมค่าที่ได้ ต่อด้วย student scores (one per line)

    for(int i = 0; i < number; i++){                        // วนลูปจาก 0 ถึง number-1 เมื่อจบloopbody จะเพิ่มค่า i ทีละ 1
        printf("Score %d: ", i+1);                          // แสดงข้อความ Score: ตามด้วยค่าของ i+1
        scanf("%d", &score);                                // รับค่าจำนวนเต็มจากผู้ใช้และเก็บในตัวแปร score
        total += score;                                     // บวกค่าที่ได้จากตัวแปร score กับ total แล้วเก็บผลลัพธ์ใน total
    }
    average = total / number;                               // คำนวณค่าเฉลี่ย โดย total หารด้วย number แล้วเก็บผลลัพธ์ใน average
    printf("\nNumber of students = %d\n", number);          // แสดงข้อความ Number of students = พร้อมค่าที่ได้จากตัวแปร number
    printf("Average score = %.2f\n", average);              // แสดงข้อความ Average score = พร้อมค่าที่ได้จากตัวแปร average โดยแสดงทศนิยม 2 ตำแหน่ง
    return 0;                                               // จบการทำงานของโปรแกรม
}