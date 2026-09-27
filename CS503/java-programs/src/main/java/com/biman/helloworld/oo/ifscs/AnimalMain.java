package com.biman.helloworld.oo.ifscs;


/*
 - extends
 - abstract method
 - no fields constant
 - can have constructor
 - no direct object

 */

abstract class Animal {
    int a = 10;
    abstract void sound();

    void eat() {
        System.out.println("Animal is eating");
    }
}

class Dog extends  Animal {

    @Override
    void sound() {
        a = 20;
        System.out.println("Dog is barking");
    }
}

class  Cat extends Animal {
    @Override
    void sound() {
        System.out.println("Cat is meowing");
    }
}

public class AnimalMain {
    public static void main(String[] args) {
        Animal dog = new Dog();
        dog.eat();
        dog.sound();


        Animal cat = new Cat();
        cat.sound();
        cat.eat();
    }
}
