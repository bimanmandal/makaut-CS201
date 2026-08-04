package com.biman.helloworld.loops;

import java.util.Scanner;

public class MultiplicationTable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number for which you want multiplication table : ");
        int mult = sc.nextInt();
        for (int i = 1; i <= 10; i++) {
            // System.out.println(mult + " x " + i + " = " + (mult * i));
            System.out.printf("%d x %d = %d\n", mult, i, (mult * i));
        }
    }
}
