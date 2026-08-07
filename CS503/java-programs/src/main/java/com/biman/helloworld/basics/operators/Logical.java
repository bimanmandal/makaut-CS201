package com.biman.helloworld.basics.operators;

public class Logical {
    public static void main(String[] args) {
        boolean isAdult = true;
        boolean hasLicense = false;

        System.out.println(isAdult && hasLicense); // false
        System.out.println(isAdult || hasLicense); // true
        System.out.println(!hasLicense); // true
    }
}
