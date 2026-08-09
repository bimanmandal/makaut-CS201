package com.biman.helloworld.oo.basics;

import java.util.Scanner;

public class StudentMain {
    public static void main(String[] args) {
        Scanner  sc = new Scanner(System.in);
        /*int[] age = new int[10];
        String[] name = new String[10];

        for (int i = 0; i < 10; i++) {
            System.out.println("Enter Student Name:");
            name[i] = sc.next();
            System.out.println("Enter Student Age:");
            age[i] = sc.nextInt();
        }

        for (int i = 0; i < 10; i++) {
            System.out.println("Student Name: " + name[i]);
            System.out.println("Student Age: " + age[i]);
        }*/

//        Student s = new Student();
//        System.out.println("Enter Student Name: ");
//        s.name = sc.next();
//        System.out.println("Enter Student Age: ");
//        s.age = sc.nextInt();
//
//        System.out.printf("Student Details. Name : %s \nAge: %d", s.name, s.age);

        Student[] students = new Student[2];
        for  (int i = 0; i < students.length; i++) {
            students[i] = new Student();
            System.out.println("Enter Student Name: ");
            students[i].name = sc.next();
            System.out.println("Enter Student Age: ");
            students[i].age = sc.nextInt();
        }

        for (int i = 0; i < students.length; i++) {
            System.out.println("Student Name: " + students[i].name);
            System.out.println("Student Age: " + students[i].age);
            System.out.println("Student is an Adult: " + students[i].isAdult());
        }

        System.out.println("Printing using enhanced for ....");

        for (Student stu:  students) {
            System.out.println("Student Name: " + stu.name);
            System.out.println("Student Age: " + stu.age);
            System.out.println("Student is an Adult: " + stu.isAdult());
        }

        sc.close();

        System.out.println("Printing using display ..... ");

        for (Student stu:  students) {
            stu.display();
        }


    }
}
