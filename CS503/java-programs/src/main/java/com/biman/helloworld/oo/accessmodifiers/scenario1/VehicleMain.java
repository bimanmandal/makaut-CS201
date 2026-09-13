package com.biman.helloworld.oo.accessmodifiers.scenario1;

public class VehicleMain {
    public static void main(String[] args) {

        Vehicle tataNano = new Vehicle();
        tataNano.numberOfWheels = 4;
        System.out.println(tataNano.numberOfWheels);
        tataNano.seats = 4;
        System.out.println(tataNano.seats);

        TataVehicle tata = new TataVehicle();
        tata.numberOfWheels = 4;
        System.out.println(tata.numberOfWheels);

    }
}
