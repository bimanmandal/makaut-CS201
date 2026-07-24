package com.biman.helloworld.conditional;

import java.util.Scanner;

public class Greaterof2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first number ");
        int a = sc.nextInt();
        System.out.print("Enter the second number ");
        int b = sc.nextInt();
        if (a > b) {
            System.out.println("The number " + a + " is greater than " + b);
        } else  {
            System.out.println("The number " + a + " is less than " + b);
        }
        sc.close();
    }
}
