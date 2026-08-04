package com.biman.helloworld.loops;

public class NamePrint {
    public static void main(String[] args) {
        // Print using for loop
        /*
        for(int i = 0 ; i < 10; i++) {
//            System.out.println((i+1) + ". Priyangshu");
            System.out.printf("%d. Priyangshu\n", i+1);
        }
        */

        // Print using while loop
        /*
        int counter = 0;
        while (counter < 10) {
            System.out.println((counter + 1) + ". Priyangshu");
            counter++;
        }
        */

        // Print using do while
        int counter = 0;
        do {
            System.out.println((counter + 1) + ". Priyangshu");
            counter++;
        } while (counter < 10);


    }
}
