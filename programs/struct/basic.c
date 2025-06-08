#include <stdio.h>

struct Student {
    char name[100];
    int rollNo;
    int age;
};

int main() {
    // int s;
    struct Student s = {"Adrija", 51, 19};
    printf("Name : %s\n", s.name);
    printf("Roll No : %d\n", s.rollNo);
    printf("Age : %d\n", s.age);

    struct Student s2;
    printf("Enter Student name: ");
    scanf("%s", s2.name);
    printf("Enter Student Roll No : ");
    scanf("%d", &s2.rollNo);
    printf("Enter Student Age : ");
    scanf("%d", &s2.age);

    printf("\n");
    printf("Second student Name : %s\n", s2.name);
    printf("Second student Roll No : %d\n", s2.rollNo);
    printf("Second student Age : %d\n", s2.age);
}