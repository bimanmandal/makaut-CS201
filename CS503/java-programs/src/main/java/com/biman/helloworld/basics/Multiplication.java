package com.biman.helloworld.basics;

import java.util.Scanner;

public class Multiplication {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first number : ");
        int a = sc.nextInt();
        System.out.print("Enter the second number : ");
        int b = sc.nextInt();
        int mult = a * b;
        System.out.println("The multiplication of " + a + " and " + b + " is " + mult);
        sc.close();
    }
}
