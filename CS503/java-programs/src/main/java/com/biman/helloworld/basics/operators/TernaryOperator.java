package com.biman.helloworld.basics.operators;

public class TernaryOperator {
    public static void main(String[] args) {
        int age = 20;
        String result;

        /*if (age < 18) {
            result = "minor";
        } else {
            result = "adult";
        }*/

        result = (age < 18) ? "minor" : "adult";


        System.out.println(result);
    }
}
