package com.biman.helloworld.array;

public class Even {
    public static void main(String[] args) {
        int[] numbers = {10, 12, 14, 15, 18, 19};

        for (int num: numbers) {
            if (num % 2 == 0) {
                System.out.print(num + " ");
            }
        }

        System.out.println();

        for (int i = 0; i < numbers.length; i++) {
            if (numbers[i] % 2 == 0) {
                System.out.print(numbers[i] + " ");
            }
        }

        // 1, 2, 31, 42, 5
        // i = 4

        System.out.println("Printing odd elements : ");
        for (int i = 0; i < numbers.length; i++) {
            if (numbers[i] % 2 == 0) {
                continue;
            }
            System.out.print(numbers[i] + " "); // 1 31 5
        }
    }
}
