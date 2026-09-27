package com.biman.helloworld.oo.methodOvrLoadOvrRide;

// Method overloading
/*
* - same method, different param
* - no inheritance required
* - same method, same # of params, but different type
* - method name must be same
* */
public class Calculator {
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c){
        return a + b + c;
    }

    int add (float a, float b) {
        return (int)(a) + (int) (b);
    }
    // error because same param and same name exists at the top
   /* float add (float a, float b) {
        return (a) + (b);
    }*/
}
