package com.biman.helloworld.oo.basics;

public class Student {
    String name;
    int age;

    Student() {

    }

    // constructor
    Student(String name, int age) {
        this.name = name;
        this.age = age;
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
