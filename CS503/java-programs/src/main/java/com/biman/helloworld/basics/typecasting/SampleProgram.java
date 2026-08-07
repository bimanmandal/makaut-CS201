package com.biman.helloworld.basics.typecasting;

public class SampleProgram {
    public static void main(String[] args) {
        // Implicit type casting
        int number = 40;
        double anotherNumber = number;
        System.out.println(number);
        System.out.println(anotherNumber);

        // Explicit type casting
        double pi = 3.14;
        int value = (int) pi;
        System.out.println(value);
    }
}
