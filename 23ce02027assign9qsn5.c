#include<stdio.h>

struct CourseRecord{
    char name[50];
    char roll[20];
    char dep[50];
    char code[30];
    int marks[3];
};
void avgMarks(struct CourseRecord student);
void result(struct CourseRecord student);
int main(){
  struct CourseRecord student={"Aryan shetty","231029","COE","CS01"};
  student.marks[0]=90;
  student.marks[1]=80;
  student.marks[2]=87;
  printf("Students name=%s\nRoll no:%s\nDepartment:%s\nCourse code:%s\nMarks:%d,%d,%d",student.name,student.roll,student.dep,student.code,student.marks[0],student.marks[1],student.marks[2]);
 avgMarks(student );
 result(student);
  return 0;

}
void avgMarks(struct CourseRecord student){
    int total=0;
    int i;
    for(i=0;i<3;i++){
     total=total+(student.marks[i]);
    }
    float avg=total/3;
    printf("\nAverage=%.2f",avg);
}
void result(struct CourseRecord student){
     int total=0;
    int i;
    for(i=0;i<3;i++){
     total=total+(student.marks[i]);
    }
    float avg=total/3;
    if(avg>35){
        printf("\nPass");
    }
    else{
        printf("\nFail");
    }
    
}