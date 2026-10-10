package com.biman.helloworld.oo.inherietance;

public class Animal {
    void eat() {
        System.out.println("Eating");
    }
}

class Dog extends Animal {
}

/*
// Class cannot extend multiple classes
class Cat extends Dog, Animal{

}

*/
