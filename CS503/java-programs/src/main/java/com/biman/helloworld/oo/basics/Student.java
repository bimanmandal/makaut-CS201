package com.biman.helloworld.oo.basics;

public class Student {
    String name;
    int age;
    static  int a = 10;

    Student() {
        System.out.println("Student constructor initialized");

    }

    // constructor
    Student(String name, int age) {
        System.out.println("Student constructor 2 initialized");
        this.name = name;
        this.age = age;
    }

    public static  boolean isAGreaterThan(int num) {
        return a >= num;
    }

    boolean isAdult() {
        return (this.age > 18) ? true : false;
    }

    void display() {
        System.out.println("Student Name: " + name);
        System.out.println("Student Age: " + age);
        System.out.println("Student is an adult : " + this.isAdult());
    }


}
