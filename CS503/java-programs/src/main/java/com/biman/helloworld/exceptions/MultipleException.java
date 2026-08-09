package com.biman.helloworld.exceptions;

public class MultipleException {
    public static void main(String[] args) {

        int[] num = {10, 45, 12, 67, 89, 0};
        /*
        try {
            int result = num[3] / num[5];
            System.out.println(result);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array index out of bounds");
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception : Cannot divide by zero");
        }
        */
        try {
            int result = num[3] / num[2];
            System.out.println(result);
        } catch (Exception adrijaexception) {
            System.out.println("Exception Encountered");
            System.out.println(adrijaexception.getMessage());
            adrijaexception.printStackTrace();
        } finally{
            System.out.println("Finally");
        }
    }
}
