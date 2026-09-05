package com.biman.helloworld.oo.basics;

public class StudentMain2 {
    public static void main(String[] args) {

        Student s1 = new Student("Adrija", 45);
        Student s2 = new Student("Nisha", 4);

        s1.display();
        s2.display();

        Student s3 = new Student("Adrija", 45);

        Student s4 = new Student();
        s4.name = "Nisha";
        s4.age = 21;

        System.out.println(Student.a); // 10
        Student.a = 50;
        Student.isAGreaterThan(30);

        System.out.println(Student.a); // 10




    }
}
