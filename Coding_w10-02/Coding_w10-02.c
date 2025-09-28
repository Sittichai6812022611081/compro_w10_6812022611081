#include <stdio.h>                                      //ประกาศ library มาตรฐาน

int main(){                                             //ฟังชั่นหลัก
 int number_students = 3;                               //จำนวนของนักศึกษา
 int number_subjects = 3;                                           // จำนวนของวิชา
 char subjects[3][30] = {"Math: ", "Physics: ", "Chemistry: "};     // ชื่อวิชา
 float scores[3][3];                                                // ตัวแปรเก็บคะแนน [นักศึกษา][วิชา]
 float total;                                                       // ตัวแปรเก็บผลรวมคะแนน
 float Average;                                                     // ตัวแปรเก็บค่าเฉลี่ย
 
for(int i = 0; i < number_students; i++){                           // วนลูปคะแนนนักศึกษา เมื่อจบloopbody จะเพิ่มค่า i ทีละ 1
 printf("Enter number of student %d:\n", i+1);                      // แสดงข้อความ Enter number of student ตามด้วยค่าของ i+1
    for(int j = 0; j < number_subjects; j++){                       // วนลูปคะแนนวิชา เมื่อจบloopbody จะเพิ่มค่า j ทีละ 1
        printf("%s", subjects[j]);                                  // แสดงข้อความชื่อวิชา
        scanf("%f", &scores[i][j]);                                 // รับค่าคะแนนจากผู้ใช้และเก็บในตัวแปร scores[i][j]
    }
}
    printf("\nScore Table:\n");                                             // แสดงข้อความ Score Table:
    printf("Student      Math             Physics          Chemistry\n");   // แสดงข้อความหัวตาราง
        for(int i = 0; i < number_students; i++){                           // วนลูปคะแนนนักศึกษา เมื่อจบloopbody จะเพิ่มค่า i ทีละ 1
            printf("%d", i+1);                                              // แสดงค่าของ i+1
            for(int j = 0; j < number_subjects; j++){                       // วนลลูปคะแนนวิชา เมื่อจบloopbody จะเพิ่มค่า j ทีละ 1
                printf("            %.2f",scores[i][j]);                    // แสดงค่าคะแนนที่เก็บในตัวแปร scores[i][j] โดยแสดงทศนิยม 2 ตำแหน่ง
            }
            printf("\n");                                                   // ขึ้นบรรทัดใหม่
        }
        
        printf("\nAverge per subject:\n");                       // แสดงข้อความ Averge per subject:
        for(int i = 0; i < number_students; i++){                // วนลูปคะแนนนักศึกษา เมื่อจบloopbody จะเพิ่มค่า i ทีละ 1
            total = 0;                                           // กำหนดค่าเริ่มต้นของ total เป็น 0
            for(int j = 0; j < number_subjects; j++) {           // วนลูปคะแนนวิชา เมื่อจบloopbody จะเพิ่มค่า j ทีละ 1
                total += scores[j][i];                           // total บวกค่าที่ได้จากตัวแปร scores[j][i] แล้วเก็บผลลัพธ์ใน total
                 Average = total / number_students;              // คำนวณค่าเฉลี่ย โดย total หารด้วย number_students แล้วเก็บผลลัพธ์ใน Average
            }
                printf("%s %.2f\n", subjects[i], Average);       // แสดงข้อความชื่อวิชา ตามด้วยค่าที่ได้จากตัวแปร Average โดยแสดงทศนิยม 2 ตำแหน่ง
            
        }
          return 0;                                             // จบโปรแกรม
  }


    