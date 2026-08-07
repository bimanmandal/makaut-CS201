package com.biman.helloworld.basics.operators;

public class BitwiseOperator {
    public static void main(String[] args) {
        int a = 5;
        int b = 3;

        System.out.println(a & b); // 101 & 011 -> 1
        System.out.println(a | b); // 101 | 011 -> 111
        System.out.println(a ^ b); // 101 ^ 011 -> 110
        System.out.println(a << b); // 00000000 00000101 << 3 -> 00000000 00101000 : 40
        System.out.println(a >> b); // 00000000 00000101 >> 3 -> 00000000 00000000 : 0
    }
}


// 00000000 00000101 >> 1
// 0000000 000001010 >> 1
// 000000 0000010100 >> 1

// 00000 00000101000