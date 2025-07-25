#include <stdio.h>
struct  Date {
    int day, month, year;
};

struct Student {
    char name[50];
    struct Date admissionDate;
};


int main() {
    struct Student student;
    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter admission date (dd): ");
    scanf("%d", &student.admissionDate.day);
    printf("Enter admission date (mm): ");
    scanf("%d", &student.admissionDate.month);
    printf("Enter admission date (yy): ");
    scanf("%d", &student.admissionDate.year);

    printf("Student with name: %s did admission on (%d/%d/%d)\n", student.name, student.admissionDate.day,student.admissionDate.month,student.admissionDate.year);
    return 0;
}
