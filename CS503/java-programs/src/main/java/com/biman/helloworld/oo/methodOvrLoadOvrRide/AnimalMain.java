package com.biman.helloworld.oo.methodOvrLoadOvrRide;

// Method Overriding

/*
* - inheritance required
* - Runtime
* - parameter same
* - method name same
* - different class
*
* */


class Animal {
    void sound() {
        System.out.println("AnimalMain sound");
    }
}

class Dog extends Animal {
    @Override
    void sound() {
        super.sound();
        System.out.println("Dog sound");
    }
}

class  Cat extends Animal {
    @Override
    void sound() {
        System.out.println("Cat sound");
    }
}

public class AnimalMain  {
    public static void main(String[] args) {
        Animal animal = new Animal();
        animal.sound();

        Dog dog = new Dog();
        dog.sound();

        Cat cat = new Cat();
        cat.sound();
    }
}