package com.biman.helloworld.exceptions;

public class BasicException {
    public static void main(String[] args) {
        int a = 20;
        int b = 0;
        try {
            int result = a / b;
            System.out.println(result);
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception: Numbers cannot be divided by zero");
        }


    }
}
