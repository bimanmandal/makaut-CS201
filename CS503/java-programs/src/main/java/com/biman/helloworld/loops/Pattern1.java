package com.biman.helloworld.loops;

/*
*   *
*   * *
*   * * *
*   * * * *
*
*
*
*
* */

public class Pattern1 {

    public static void main(String[] args) {
        int rows = 4;
        int cols = 4;

        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= cols; j++) {
                if (i >= j) {
                    System.out.print("* ");
                }
            }
            System.out.println();
        }


    }
}
