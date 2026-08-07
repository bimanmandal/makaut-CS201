package com.biman.helloworld.basics.variables;

public class TypesOfVariables {

    int num = 20; // instance variable

    static int num2 = 40; // static variable

    public static void main(String[] args) {
        int number = 10; // local variable
        System.out.println(num2);
    }

    public void test() {
        //        System.out.println(number);
        System.out.println(num);
        System.out.println(num2);
    }
}
