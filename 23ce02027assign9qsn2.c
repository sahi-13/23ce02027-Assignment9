#include <stdio.h>

struct Student {
    char RollNo[20];
    char Name[50];
    char Address[100];
    int Age;
    float AverageMarks;
};

void getStudentDetails(struct Student students[]) {
    for (int i = 0; i < 6; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%s", students[i].RollNo);
        printf("Name: ");
        scanf("%s", students[i].Name);
        printf("Address: ");
        scanf("%s", students[i].Address);
        printf("Age: ");
        scanf("%d", &students[i].Age);
        printf("Average Marks: ");
        scanf("%f", &students[i].AverageMarks);
    }
}

void displayStudentDetails(struct Student students[]) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < 6; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %s\n", students[i].RollNo);
        printf("Name: %s\n", students[i].Name);
        printf("Address: %s\n", students[i].Address);
        printf("Age: %d\n", students[i].Age);
        printf("Average Marks: %.2f\n", students[i].AverageMarks);
    }
}

int main() {
    struct Student students[6];
    getStudentDetails(students);
    displayStudentDetails(students);
    return 0;
}
