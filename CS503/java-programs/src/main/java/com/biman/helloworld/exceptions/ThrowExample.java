package com.biman.helloworld.exceptions;

import java.util.Scanner;

public class ThrowExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number");
        int num = sc.nextInt();
        System.out.println("Enter number");
        int num2 = sc.nextInt();

        try {
            if (num2 == 0) {
                throw new IllegalArgumentException("2nd number cannot be zero");
            }
            int div = num / num2;
            System.out.println(div);
        }  catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception: Numbers cannot be divided by zero");
        }



    }
}
