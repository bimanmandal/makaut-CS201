package com.biman.helloworld.basics.operators;

public class AssignmentOperator {
    public static void main(String[] args) {
        int x = 30;

        x += 5; // x = x + 5;
        System.out.println(x);
        x -= 5; // x = x - 5;
        System.out.println(x);
        x *= 5; // x = x * 5;
        System.out.println(x);
        x /= 5;
        System.out.println(x);
        x %= 5;
        System.out.println(x);
    }
}
