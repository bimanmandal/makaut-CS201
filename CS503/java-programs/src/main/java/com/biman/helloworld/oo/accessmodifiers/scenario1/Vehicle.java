package com.biman.helloworld.oo.accessmodifiers.scenario1;


// public - throughout the src
// protected - same package and its sub class
// default - same package
// private - same file

public class Vehicle {
    public int numberOfWheels;
    protected int seats;
    String color;


    protected Vehicle() {
    }

    public Vehicle(int numberOfWheels, int seats, String color) {
        this.numberOfWheels = numberOfWheels;
        this.seats = seats;
        this.color = color;
    }



}
