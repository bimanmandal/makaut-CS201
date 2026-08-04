package com.biman.helloworld.loops;

public class SumNaturals {
    public static void main(String[] args) {
        int limit = 10;
        int sum = 0;
        for (int i = 1; i <= limit; i++) {
            sum += i;
        }
        System.out.println("The sum of " + limit + " natural numbers is " + sum);
    }
}
